#ifndef keyer_pin_settings_h
#define keyer_pin_settings_h

#define paddle_left 2
#define paddle_right 5
#define tx_key_line_1 11        // (high = key down/tx on)
#define tx_key_line_2 0        // nanoKeyer PTT port (Pin 13) may be used as 2nd keying line for SO2R
#define tx_key_line_3 0
#define tx_key_line_4 0
#define tx_key_line_5 0
#define tx_key_line_6 0
#define sidetone_line 4         // connect a speaker for sidetone
#define potentiometer A0        // Rev D nanoKeyer
#define ptt_tx_1 13             // nanoKeyer PTT port (uncomment if using above as 2nd CW port for SO2R operation)
#define ptt_tx_2 0              // Can be used for keying fox transmitter, T/R switch, or keying slow boatanchors
#define ptt_tx_3 0              // These are optional - set to 0 if unused
#define ptt_tx_4 0
#define ptt_tx_5 0
#define ptt_tx_6 0
#define analog_buttons_pin A1   // Rev D nanokeyer
#define lcd_rs A2
#define lcd_enable 10
#define lcd_d4 6
#define lcd_d5 7
#define lcd_d6 8
#define lcd_d7 9
#define ps2_keyboard_data A3    // Rev D nanokeyer
#define ps2_keyboard_clock 3
#define tx_key_dit 0            // if defined, goes active for dit (any transmitter) - customized with tx_key_dit_and_dah_pins_active_state and tx_key_dit_and_dah_pins_inactive_state
#define tx_key_dah 0            // if defined, goes active for dah (any transmitter) - customized with tx_key_dit_and_dah_pins_active_state and tx_key_dit_and_dah_pins_inactive_state

#if defined(FEATURE_SLEEP)
  #define keyer_awake 13       // Goes active when keyer is awake, inactive when in sleep mode; change active and inactive states in keyer_settings file
#endif

#endif //keyer_pin_settings_h
