![CH32X035 USB HID Keyboard Library](img/title.png)

# CH32X035 USB HID Keyboard Library

A high-performance, efficient USB HID Keyboard library tailored for the **WCH CH32X035** RISC-V microcontroller series.

This library leverages the hardware USBFS peripheral and synchronized interrupts to provide a robust, ultra-fast keyboard emulation interface. It allows your CH32X035 to type into any computer (Windows, macOS, Linux, Android) just like a standard physical keyboard, with no drivers required.

## Features

*   **Class Compliant:** Works natively as a standard USB Keyboard on all major operating systems.
*   **Hardware Synchronization:** Uses interrupt flags to synchronize data transfer with the USB host, preventing data loss during high-speed typing.
*   **High Performance:** Capable of sending keystrokes at maximum USB polling speed (up to 500 chars/sec in raw mode).
*   **Compatibility Mode:** Includes an adjustable delay mechanism (`setDelay`) to ensure reliability with slower GUI aplicaciones.
*   **Full Modifier Support:** Easy access to Ctrl, Shift, Alt, and GUI (Windows/Command) keys.

## API Overview

The library adheres to the standard Arduino `Keyboard` API conventions while adding specific enhancements for the CH32X035 architecture.

| Function | Description |
| :--- | :--- |
| `Keyboard.begin()` | Initializes the USB stack and enumerates the device. |
| `Keyboard.print("text")` | Types a string of characters. |
| `Keyboard.println("text")` | Types a string followed by a newline (Enter). |
| `Keyboard.write(key)` | Presses and immediately releases a single key. |
| `Keyboard.press(key)` | Holds a key down (useful for combos like Ctrl+C). |
| `Keyboard.release(key)` | Releases a specific key. |
| `Keyboard.releaseAll()` | Releases all currently held keys. |
| `Keyboard.setDelay(ms)` | **New:** Adds a safety delay (in ms) between keystrokes to prevent errors in slow apps. |

## Supported Special Keys

The library defines standard constants for non-printing keys:

| Key Constant | Description | Key Constant | Description |
| :--- | :--- | :--- | :--- |
| `KEY_LEFT_CTRL` | Left Control | `KEY_RETURN` | Enter |
| `KEY_LEFT_SHIFT` | Left Shift | `KEY_ESC` | Escape |
| `KEY_LEFT_ALT` | Left Alt | `KEY_BACKSPACE` | Backspace |
| `KEY_LEFT_GUI` | Windows / Command | `KEY_TAB` | Tab |
| `KEY_UP_ARROW` | Up Arrow | `KEY_CAPS_LOCK` | Caps Lock |
| `KEY_DOWN_ARROW` | Down Arrow | `KEY_F1` - `KEY_F12` | Function Keys |

## Installation

1.  Download this repository as a ZIP file.
2.  Open the Arduino IDE.
3.  Go to **Sketch** -> **Include Library** -> **Add .ZIP Library...**
4.  Select the downloaded ZIP file.
5.  Restart the IDE.

## Usage Guide

### 1. Basic Setup

Include the library and initialize it in `setup()`.

```cpp
#include <USBHIDKeyboard.h>

void setup() {
    // Initialize USB Keyboard stack
    Keyboard.begin();
    
    // Recommended: Give the host OS time to enumerate
    delay(2000);
}

void loop() {
    // Your logic here
}
```

### 2. Typing Text & Compatibility

If you are typing into a fast application, you can use the default speed. For apps like **Notepad** on Windows, it's safer to add a small delay.

```cpp
void setup() {
    Keyboard.begin();
    // Add a 10ms delay between keystrokes for compatibility
    Keyboard.setDelay(10); 
    delay(2000);
}

void loop() {
    Keyboard.println("Hello from CH32X035!");
    delay(5000);
}
```

### 3. Key Combinations (Shortcuts)

Use `press()` and `releaseAll()` for complex shortcuts.

```cpp
void openTaskManager() {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_ESC);
    delay(50);
    Keyboard.releaseAll();
}

void copy() {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('c');
    delay(50);
    Keyboard.releaseAll();
}
```

## Credits & Acknowledgements

This library was developed by **NoNamedCat**.

It is architecturally inspired by and built upon the **[CH32X035_USBSerial](https://github.com/jobitjoseph/CH32X035_USBSerial)** library.

Special thanks to **[jobitjoseph](https://github.com/jobitjoseph)** for his excellent work on the CH32X035 USB CDC implementation, which provided the essential foundation for the low-level USBFS initialization and endpoint management used in this project.

## License

This project is licensed under the MIT License - see the LICENSE file for details.