/*
 * led7.c
 *
 *  Created on: Sep 10, 2024
 *      Author: User
 */
#include "led7.h"
#include "input_reading.h"
#include "main.h"
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
uint8_t digit1, digit2,digit3,digit4 ;

void display2number(int num1,int num2){ // ok
    digit1 = num1 / 10;
    digit2 = num1 % 10;
    digit3 = num2 / 10;
    digit4 = num2 % 10;
    if (num1 < 10) digit1 = 0;
        if (num2 < 10) digit3 = 0;
        HAL_GPIO_WritePin(GPIOB, digit_pins_1[0], GPIO_PIN_RESET);
        HAL_GPIO_WritePin(GPIOB, digit_pins_2[0], GPIO_PIN_RESET);
        HAL_GPIO_WritePin(GPIOB, digit_pins_1[1], GPIO_PIN_RESET);
        HAL_GPIO_WritePin(GPIOB, digit_pins_2[1], GPIO_PIN_RESET);
    switch (digit_index){
    case 1:
		HAL_GPIO_WritePin(GPIOB, digit_pins_2[0], GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, digit_pins_1[0], GPIO_PIN_SET);
		display1(digit1);
    	break;
    case 2:
		HAL_GPIO_WritePin(GPIOB, digit_pins_1[0], GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, digit_pins_2[0], GPIO_PIN_SET);
		display1(digit2);
        	break;
    case 3:
		HAL_GPIO_WritePin(GPIOB, digit_pins_2[1], GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, digit_pins_1[1], GPIO_PIN_SET);
		display1(digit3);
        	break;
    case 4:
		HAL_GPIO_WritePin(GPIOB, digit_pins_1[1], GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, digit_pins_2[1], GPIO_PIN_SET);
		display1(digit4);
        	break;
    default:
        	break;
    }
    digit_index++;
	if (digit_index >4) digit_index=1;
}

//int countabc=0;
//void led_run(void){
//
//	      if (countabc <= 5) {
//	    	  HAL_GPIO_WritePin(GPIOB, red1_Pin,1) ;
//	    	  HAL_GPIO_WritePin(GPIOB, yellow1_Pin,0) ;
//
//	    	  HAL_GPIO_WritePin(GPIOB, green2_Pin,1) ;
//	    	  HAL_GPIO_WritePin(GPIOB, red2_Pin,0) ;
//	      } else if (countabc <= 8) {
//	    	  HAL_GPIO_WritePin(green1_GPIO_Port, green1_Pin,1) ;
//	    	  HAL_GPIO_WritePin(red1_GPIO_Port, red1_Pin,0) ;
//
//	    	  HAL_GPIO_WritePin(yellow2_GPIO_Port, yellow2_Pin,1) ;
//	    	  HAL_GPIO_WritePin(green2_GPIO_Port, green2_Pin,0) ;
//	      } else if (countabc <= 10) {
//	    	  HAL_GPIO_WritePin(red2_GPIO_Port, red2_Pin,1) ;
//	    	  HAL_GPIO_WritePin(yellow2_GPIO_Port, yellow2_Pin,0) ;
//
//	      } else if (countabc <= 13){
//	    	  HAL_GPIO_WritePin(green1_GPIO_Port, green1_Pin,1) ;
//	    	  HAL_GPIO_WritePin(yellow1_GPIO_Port, yellow1_Pin,0) ;
//
//	      }else countabc = 0;
//
//	      countabc++;}

//void runled7(){
//	//selectpos(1);
////updatetime(20);
////	button_reading();
////	display2number(1,19);
//	countdown(19);
//
////	if(button_reading()==1){
////		led_red_blink();
////	}
//
//}
