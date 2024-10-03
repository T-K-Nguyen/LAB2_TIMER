/*
 * Ex3.c
 *
 *  Created on: Oct 3, 2024
 *      Author: thuan
 */
#include "Ex3.h"

/*
int timer1_counter = 0;
int timer1_flag = 0;

void setTimer1(int duration){
	timer1_counter = duration;
	timer1_flag = 0;
}
void timerRun(){
	if(timer1_counter > 0){
		timer1_counter--;
		if(timer1_counter <= 0){
			timer1_flag = 1;
		}
	}
}
*/

int led_buffer [4] = {1, 2, 3, 4};
void update7SEG (int* index ){
	switch (*index){
		case 0:
			display7SEG(led_buffer[*index]);
			HAL_GPIO_WritePin(GPIOA, EN0_Pin, RESET);
			HAL_GPIO_WritePin(GPIOA, EN1_Pin|EN2_Pin|EN3_Pin, SET);
			*index = 1;
			break ;
		case 1:
			display7SEG(led_buffer[*index]);
			HAL_GPIO_WritePin(GPIOA, EN1_Pin, RESET);
			HAL_GPIO_WritePin(GPIOA, EN0_Pin|EN2_Pin|EN3_Pin, SET);
			*index = 2;
			break ;
		case 2:
			display7SEG(led_buffer[*index]);
			HAL_GPIO_WritePin(GPIOA, EN2_Pin, RESET);
			HAL_GPIO_WritePin(GPIOA, EN1_Pin|EN0_Pin|EN3_Pin, SET);
			*index = 3;
			break ;
		case 3:
			display7SEG(led_buffer[*index]);
			HAL_GPIO_WritePin(GPIOA, EN3_Pin, RESET);
			HAL_GPIO_WritePin(GPIOA, EN1_Pin|EN2_Pin|EN0_Pin, SET);

			*index = 0;
			break ;
		default :
			break ;
	}
}
