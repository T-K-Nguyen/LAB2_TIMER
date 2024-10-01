/*
 * Ex2.c
 *
 *  Created on: Sep 29, 2024
 *      Author: thuan
 */
#include "Ex2.h"

void digiClock(int* stat){

	if(*stat == 0){
		*stat = 1;
		HAL_GPIO_TogglePin(GPIOA , EN0_Pin | EN1_Pin);
		HAL_GPIO_WritePin(GPIOA, EN3_Pin, SET);
	}
	else if(*stat == 1){
		*stat = 2;
		HAL_GPIO_TogglePin(GPIOA , EN1_Pin | EN2_Pin);
		HAL_GPIO_WritePin(GPIOA, EN0_Pin, SET);
	}
	else if(*stat == 2){
		*stat = 3;
		HAL_GPIO_TogglePin(GPIOA , EN2_Pin | EN3_Pin);
		HAL_GPIO_WritePin(GPIOA, EN1_Pin, SET);
	}
	else if(*stat == 3){
		*stat = 0;
		HAL_GPIO_TogglePin(GPIOA , EN3_Pin | EN0_Pin);
		HAL_GPIO_WritePin(GPIOA, EN2_Pin, SET);
	}

	if(*stat == -1) {
		HAL_GPIO_WritePin(GPIOA, EN0_Pin, RESET);
		display7SEG(1);
		*stat = 0;
	}
	if(*stat == 0) display7SEG(1);
	if(*stat == 1) display7SEG(2);
	if(*stat == 2) display7SEG(3);
	if(*stat == 3) display7SEG(0);
}
