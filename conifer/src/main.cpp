
#include <Arduino.h>
#include <USBHIDKeyboard.h>

// todo
static const uint8_t ROW_PINS[] = { PA0, PA1 };
static const uint8_t COL_PINS[] = { PA2, PA3 };

#define NUM_ROWS (sizeof(ROW_PINS) / sizeof(ROW_PINS[0]))
#define NUM_COLS (sizeof(COL_PINS) / sizeof(COL_PINS[0]))

static const uint8_t KEYMAP[NUM_ROWS][NUM_COLS] = {
  { 'a', 'b' },
  { 'c', KEY_RETURN },
};

// Debounce: number of consecutive identical scans before a change is accepted.
static const uint8_t DEBOUNCE_SCANS = 5;

// ---------------------------------------------------------------------------
static bool    keyDown[NUM_ROWS][NUM_COLS];   // current stable state
static uint8_t stableCount[NUM_ROWS][NUM_COLS];
static bool    lastRead[NUM_ROWS][NUM_COLS];

void setup() {
  for (uint8_t r = 0; r < NUM_ROWS; r++) {
    pinMode(ROW_PINS[r], OUTPUT);
    digitalWrite(ROW_PINS[r], HIGH);          // inactive (not selected)
  }
  for (uint8_t c = 0; c < NUM_COLS; c++) {
    pinMode(COL_PINS[c], INPUT_PULLUP);
  }

  for (uint8_t r = 0; r < NUM_ROWS; r++)
    for (uint8_t c = 0; c < NUM_COLS; c++) {
      keyDown[r][c] = lastRead[r][c] = false;
      stableCount[r][c] = 0;
    }

  Keyboard.begin();
  delay(1000);                                // let the host enumerate
}

void loop() {
  for (uint8_t r = 0; r < NUM_ROWS; r++) {
    digitalWrite(ROW_PINS[r], LOW);           // select this row
    delayMicroseconds(5);                     // let the line settle

    for (uint8_t c = 0; c < NUM_COLS; c++) {
      bool pressed = (digitalRead(COL_PINS[c]) == LOW);

      if (pressed == lastRead[r][c]) {
        if (stableCount[r][c] < DEBOUNCE_SCANS) stableCount[r][c]++;
      } else {
        stableCount[r][c] = 0;
        lastRead[r][c] = pressed;
      }

      // Commit a change only once it has been stable long enough.
      if (stableCount[r][c] >= DEBOUNCE_SCANS && keyDown[r][c] != pressed) {
        keyDown[r][c] = pressed;
        uint8_t k = KEYMAP[r][c];
        if (k) {
          if (pressed) Keyboard.press(k);
          else         Keyboard.release(k);
        }
      }
    }

    digitalWrite(ROW_PINS[r], HIGH);          // deselect
  }
}
