/*
 * input_processing.c
 *
 *  Created on: Sep 30, 2024
 *      Author: User
 */

 #include "main.h"
 #include "input_reading.h"
 #include "led_display.h"
#include "timer.h"
 enum ButtonState{BUTTON_RELEASED, BUTTON_PRESSED, BUTTON_PRESSED_MORE_THAN_1_SECOND} ;
 enum ButtonState buttonState = BUTTON_RELEASED;
 enum ButtonState button4State = BUTTON_RELEASED;


uint8_t modemode = 1;
uint8_t redDuration = 1;

void handle_mode(void) {
	switch (modemode) {
		case 1:
			normalstate();
			break;
		case 2:
			modify_red_duration();
			break;
		case 3:
			modify_yellow_duration();
			break;
		case 4:
			modify_green_duration();
			break;
	}

}
void fsm_for_input_processing(void) {
    switch (buttonState) {
        case BUTTON_RELEASED:
            if (is_button_pressed(0)) {  // button1
                buttonState = BUTTON_PRESSED;
            }

            if (is_button_pressed(3)) {  // button4
                button4State = BUTTON_PRESSED;
                modemode = 1;
                updatemode(modemode);
            }
            break;

        case BUTTON_PRESSED:
        	if (!is_button_pressed(0)) {  // Nút 1 không còn được nhấn
				buttonState = BUTTON_RELEASED;

				if (modemode == 1)	modemode = 2;
				else  				modemode++;

				if (modemode > 4)	modemode = 1;

				updatemode(modemode);  // Hiển thị mode mới
        	 }
        	 break;

        case BUTTON_PRESSED_MORE_THAN_1_SECOND:
            if (!is_button_pressed(0)) {
                buttonState = BUTTON_RELEASED;
            }
            break;
    }

    update_handlemode();
}
