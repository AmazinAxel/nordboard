#include <USBHIDKeyboard.h>

void setup() {
  Keyboard.begin();
  // Optional: Add a delay between key presses (in milliseconds)
  // This helps compatibility with some applications that process text slowly.
  // Keyboard.setDelay(10); 
  
  // Wait for the host to enumerate the USB device
  delay(1000);
}

void loop() {
  // Type "Hello World" every 5 seconds
  Keyboard.print("Hello World from CH32X035!");
  Keyboard.write(KEY_RETURN);
  
  delay(5000);
}
