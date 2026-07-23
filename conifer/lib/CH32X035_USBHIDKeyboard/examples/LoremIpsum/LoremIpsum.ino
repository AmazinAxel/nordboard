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
  // Lorem Ipsum standard text
  Keyboard.print("Lorem ipsum dolor sit amet, consectetur adipiscing elit. ");
  Keyboard.print("Sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. ");
  Keyboard.print("Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. ");
  Keyboard.print("Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. ");
  Keyboard.print("Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.");
  
  Keyboard.write(KEY_RETURN);
  Keyboard.write(KEY_RETURN);
  
  // Wait 10 seconds before repeating
  delay(10000);
}