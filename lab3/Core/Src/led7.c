/*
 * led7.c
 *
 *  Created on: Sep 10, 2024
 *      Author: User
 */
#include "led7.h"
#include "input_reading.h"

#define SETNUM 8
void display1(int num){
	switch (num){
	case 0:
		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, 0);
		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, 0);
		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, 0);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, 0);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, 1);
		break;
	case 1:
		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, 1);
		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, 1);
		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, 1);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, 1);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, 1);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, 0);
			break;
	case 2:
		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, 1);
		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, 0);
		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, 0);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, 1);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, 0);
			break;
	case 3:
		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, 0);
		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, 0);
		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, 1);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, 1);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, 0);
			break;
	case 4:
		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, 1);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, 0);
		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, 1);
		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, 1);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, 0);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, 0);
			break;
	case 5:
		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, 1);
		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, 0);
		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, 0);
		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, 1);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, 0);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, 0);
			break;
	case 6:
		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, 1);
		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, 0);
		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, 0);
		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, 0);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, 0);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, 0);
			break;
	case 7:
		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, 0);
		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, 1);
		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, 1);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, 1);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, 1);
			break;
	case 8:
		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, 0);
		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, 0);
		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, 0);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, 0);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, 0);
			break;
	case 9:
		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, 0);
		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, 0);
		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, 1);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, 0);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, 0);
			break;
	default:
		break;
	}
}


	int counttt=0,count9=9;

void display1to9(void){
	display1(counttt++);
	if(counttt>9) counttt=0;
}
int secnum;
void selectnum(int num){
	display1(num--);
	if(num<=0) num=0;
}
int num=SETNUM;
int digit_index=0;
const uint16_t digit_pins_1[] = {EN1_Pin, EN3_Pin};
const uint16_t digit_pins_2[] = { EN2_Pin, EN4_Pin};

int time=12;
int digit1, digit2 ;
void display2number(int pos,int num){ // ok
    digit1 = num / 10;
    digit2 = num % 10;
	if (digit_index == 0) {
		HAL_GPIO_WritePin(GPIOB, digit_pins_2[pos], GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, digit_pins_1[pos], GPIO_PIN_SET);
		display1(digit1);
	} else {
		HAL_GPIO_WritePin(GPIOB, digit_pins_1[pos], GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, digit_pins_2[pos], GPIO_PIN_SET);
		display1(digit2);
	}

	digit_index=!digit_index;
    //HAL_Delay(30);
}
//void countdown(int pos){
//	digit1 = time / 10;
//	    digit2 = time % 10;
//		int idx = (1-pos);
//		if (digit_index == 0) {
//			HAL_GPIO_WritePin(GPIOB, digit_pins_1[idx], GPIO_PIN_SET);
//			HAL_GPIO_WritePin(GPIOB, digit_pins_2[idx], GPIO_PIN_RESET);
//			display1(digit1);
//		} else {
//			HAL_GPIO_WritePin(GPIOB, digit_pins_2[idx], GPIO_PIN_SET);
//			HAL_GPIO_WritePin(GPIOB, digit_pins_1[idx], GPIO_PIN_RESET);
//			display1(digit2);
//
//
//		digit_index++;
//	    if (digit_index >= 2) digit_index = 0;
//
//}
int num1, num2;
void countdown(int pos){
	digit1 = time / 10;
	    digit2 = time % 10;
		int idx = (1-pos);
		if (digit_index == 0) {
			HAL_GPIO_WritePin(GPIOB, digit_pins_1[idx], GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, digit_pins_2[idx], GPIO_PIN_RESET);
			display1(digit1);
		} else {
			HAL_GPIO_WritePin(GPIOB, digit_pins_2[idx], GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, digit_pins_1[idx], GPIO_PIN_RESET);
			display1(digit2);

		}
		digit_index++;
	    if (digit_index >= 2) digit_index = 0;

}
int cntred1 = 5;

void display1_run(void) {
	digit1 = cntred1 / 10;
		    digit2 = cntred1 % 10;
    	 if (cntred1 >= 0) 	{
    		 display2number(1,cntred1);
    	 }

    	 cntred1--;
    if (cntred1 < 0 ) {
        cntred1 = 5;

    }
}

void runled7(){
	//selectpos(1);
//updatetime(20);
//	button_reading();
//	display2number(1,19);
	display1_run();
	HAL_Delay(500);

//	if(button_reading()==1){
//		led_red_blink();
//	}

}
