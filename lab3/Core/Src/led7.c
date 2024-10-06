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
uint8_t digit1, digit2,digit3,digit4 ;
//void display2number(int pos,int num){ // ok
//    digit1 = num / 10;
//    digit2 = num % 10;
//	if (digit_index == 0) {
//		HAL_GPIO_WritePin(GPIOB, digit_pins_2[pos], GPIO_PIN_RESET);
//		HAL_GPIO_WritePin(GPIOB, digit_pins_1[pos], GPIO_PIN_SET);
//		display1(digit1);
//	} else {
//		HAL_GPIO_WritePin(GPIOB, digit_pins_1[pos], GPIO_PIN_RESET);
//		HAL_GPIO_WritePin(GPIOB, digit_pins_2[pos], GPIO_PIN_SET);
//		display1(digit2);
//	}
//
//	digit_index=!digit_index;
//}
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
void countdown(int numnum){
	    display2number(0,numnum--);
	    if(numnum<=0) numnum =19;
}
int num1, num2;
//void countdown(int time){
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
//		}
//		digit_index++;
//	    if (digit_index >= 2) digit_index = 0;
//
//}
int red_time = 15;   // Thời gian đèn đỏ (giây)
int yellow_time = 6; // Thời gian đèn vàng (giây)
int green_time = 18; // Thời gian đèn xanh (giây)

int current_time = 0;  // Thời gian còn lại của trạng thái hiện tại
int state = 0;         // Trạng thái đèn giao thông: 0=Red, 1=Yellow, 2=Green

// Đếm ngược và chuyển trạng thái
void trafficLightCounter() {
    if (current_time > 0) {
        current_time--;
    } else {
        // Chuyển sang trạng thái đèn tiếp theo khi hết thời gian
        switch (state) {
            case 0:  // Đèn đỏ -> Đèn xanh
                state = 2;
                current_time = green_time;
                break;
            case 1:  // Đèn vàng -> Đèn đỏ
                state = 0;
                current_time = red_time;
                break;
            case 2:  // Đèn xanh -> Đèn vàng
                state = 1;
                current_time = yellow_time;
                break;
            default:
                break;
        }
    }
}
void displayTrafficCountdown() {
    // Hiển thị số giây còn lại của đèn giao thông
    display2number(current_time, current_time); // Số trên 2 cột đèn giao thông

//    // Điều khiển các đèn giao thông (giả sử đèn đỏ, vàng, xanh lần lượt trên GPIO)
//    switch (state) {
//        case 0:  // Đèn đỏ
//            HAL_GPIO_WritePin(GPIOB, LED, GPIO_PIN_SET);
//            HAL_GPIO_WritePin(GPIOB, YELLOW_PIN, GPIO_PIN_RESET);
//            HAL_GPIO_WritePin(GPIOB, GREEN_PIN, GPIO_PIN_RESET);
//            break;
//        case 1:  // Đèn vàng
//            HAL_GPIO_WritePin(GPIOB, RED_PIN, GPIO_PIN_RESET);
//            HAL_GPIO_WritePin(GPIOB, YELLOW_PIN, GPIO_PIN_SET);
//            HAL_GPIO_WritePin(GPIOB, GREEN_PIN, GPIO_PIN_RESET);
//            break;
//        case 2:  // Đèn xanh
//            HAL_GPIO_WritePin(GPIOB, RED_PIN, GPIO_PIN_RESET);
//            HAL_GPIO_WritePin(GPIOB, YELLOW_PIN, GPIO_PIN_RESET);
//            HAL_GPIO_WritePin(GPIOB, GREEN_PIN, GPIO_PIN_SET);
//            break;
//        default:
//            break;
//    }
}
int cntred = 5, cntye = 3, cntgr = 5;
int cntred2 = 5, cntye2 = 3, cntgr2 = 5;
void showstate(int num11, int num22){
	if (cntred >= 0) num11=cntred--;
	else if (cntgr >= 0)  	num11=cntgr--;
	else if (cntye >= 0) 	num11=cntye--;

	if (cntgr2 >= 0)  	num22=cntgr2--;
	else if (cntye2 >= 0) 	num22=cntye2--;
	else if (cntred2 >= 0) 	num22=cntred2--;

	if (cntred2 < 0 && cntgr2 < 0 && cntye2 < 0) {
	cntred2 = 5;
	cntgr2 = 5;
	cntye2 = 3;
	}

	if (cntred < 0 && cntgr < 0 && cntye < 0) {
	cntred = 5;
	cntgr = 5;
	cntye = 3;
	}
}


void runled7(){
	//selectpos(1);
//updatetime(20);
//	button_reading();
//	display2number(1,19);
	countdown(19);

//	if(button_reading()==1){
//		led_red_blink();
//	}

}
