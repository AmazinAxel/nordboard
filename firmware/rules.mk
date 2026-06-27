## TODO clean up keyboard.json

# Split
SERIAL_DRIVER = vendor # fastest split serial PIO
BOOTLOADER = rp2040

#MOUSEKEY_ENABLE = no
#EXTRAKEY_ENABLE = no # these system keys are managed by Sway keybinds!
CONSOLE_ENABLE = no # debug console
COMMAND_ENABLE = no # no key combos
#NKRO_ENABLE = no # dont need more than six keys on

# LEDs
BACKLIGHT_ENABLE = no
RGBLIGHT_ENABLE = no
RGB_MATRIX_ENABLE = no
LED_MATRIX_ENABLE = no

AUDIO_ENABLE = no
ENCODER_ENABLE = no
OLED_ENABLE = no
WPM_ENABLE = no
HAPTIC_ENABLE = no
POINTING_DEVICE_ENABLE = no
RAW_ENABLE = no
VIA_ENABLE = no
COMBO_ENABLE = no
#TAP_DANCE_ENABLE = no
KEY_OVERRIDE_ENABLE = no
LEADER_ENABLE = no
DYNAMIC_MACRO_ENABLE = no
MUSIC_ENABLE = no
MIDI_ENABLE = no
UNICODE_ENABLE = no
UNICODEMAP_ENABLE = no
UCIS_ENABLE = no
DIP_SWITCH_ENABLE = no
SPACE_CADET_ENABLE = no # TODO maybe use this?
#GRAVE_ESC_ENABLE = no
MAGIC_ENABLE = no # no magic keycodes
DEFERRED_EXEC_ENABLE = no


# TODO figure out how to use this if it has any benefits
# EE_HANDS = yes