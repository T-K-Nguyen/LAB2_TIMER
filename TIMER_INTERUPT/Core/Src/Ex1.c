/*
 * Ex1.c
 *
 *  Created on: Sep 26, 2024
 *      Author: thuan
 */
#include "Ex1.h"

void display7SEG(int num){
	  switch (num) {
	  	case 0:
	  		HAL_GPIO_WritePin (LED_A_GPIO_Port, LED_A_Pin, RESET );
			HAL_GPIO_WritePin (LED_B_GPIO_Port, LED_B_Pin, RESET );
			HAL_GPIO_WritePin (LED_C_GPIO_Port, LED_C_Pin, RESET );
			HAL_GPIO_WritePin (LED_D_GPIO_Port, LED_D_Pin, RESET );
			HAL_GPIO_WritePin (LED_E_GPIO_Port, LED_E_Pin, RESET );
			HAL_GPIO_WritePin (LED_F_GPIO_Port, LED_F_Pin, RESET );
			HAL_GPIO_WritePin (LED_G_GPIO_Port, LED_G_Pin, SET );
	  		break;

		case 1:
			HAL_GPIO_WritePin (LED_A_GPIO_Port, LED_A_Pin, SET );
			HAL_GPIO_WritePin (LED_B_GPIO_Port, LED_B_Pin, RESET );
			HAL_GPIO_WritePin (LED_C_GPIO_Port, LED_C_Pin, RESET );
			HAL_GPIO_WritePin (LED_D_GPIO_Port, LED_D_Pin, SET );
			HAL_GPIO_WritePin (LED_E_GPIO_Port, LED_E_Pin, SET );
			HAL_GPIO_WritePin (LED_F_GPIO_Port, LED_F_Pin, SET );
			HAL_GPIO_WritePin (LED_G_GPIO_Port, LED_G_Pin, SET );
			break;
		case 2:
			HAL_GPIO_WritePin (LED_A_GPIO_Port, LED_A_Pin, RESET );
			HAL_GPIO_WritePin (LED_B_GPIO_Port, LED_B_Pin, RESET );
			HAL_GPIO_WritePin (LED_C_GPIO_Port, LED_C_Pin, SET );
			HAL_GPIO_WritePin (LED_D_GPIO_Port, LED_D_Pin, RESET );
			HAL_GPIO_WritePin (LED_E_GPIO_Port, LED_E_Pin, RESET );
			HAL_GPIO_WritePin (LED_F_GPIO_Port, LED_F_Pin, SET );
			HAL_GPIO_WritePin (LED_G_GPIO_Port, LED_G_Pin, RESET );
			break;

		case 3:
			HAL_GPIO_WritePin (LED_A_GPIO_Port, LED_A_Pin, RESET );
			HAL_GPIO_WritePin (LED_B_GPIO_Port, LED_B_Pin, RESET );
			HAL_GPIO_WritePin (LED_C_GPIO_Port, LED_C_Pin, RESET );
			HAL_GPIO_WritePin (LED_D_GPIO_Port, LED_D_Pin, RESET );
			HAL_GPIO_WritePin (LED_E_GPIO_Port, LED_E_Pin, SET );
			HAL_GPIO_WritePin (LED_F_GPIO_Port, LED_F_Pin, SET );
			HAL_GPIO_WritePin (LED_G_GPIO_Port, LED_G_Pin, RESET );
			break;

		case 4:
			HAL_GPIO_WritePin (LED_A_GPIO_Port, LED_A_Pin, SET );
			HAL_GPIO_WritePin (LED_B_GPIO_Port, LED_B_Pin, RESET );
			HAL_GPIO_WritePin (LED_C_GPIO_Port, LED_C_Pin, RESET );
			HAL_GPIO_WritePin (LED_D_GPIO_Port, LED_D_Pin, SET );
			HAL_GPIO_WritePin (LED_E_GPIO_Port, LED_E_Pin, SET );
			HAL_GPIO_WritePin (LED_F_GPIO_Port, LED_F_Pin, RESET );
			HAL_GPIO_WritePin (LED_G_GPIO_Port, LED_G_Pin, RESET );
			break;
		case 5:
			HAL_GPIO_WritePin (LED_A_GPIO_Port, LED_A_Pin, RESET );
			HAL_GPIO_WritePin (LED_B_GPIO_Port, LED_B_Pin, SET );
			HAL_GPIO_WritePin (LED_C_GPIO_Port, LED_C_Pin, RESET );
			HAL_GPIO_WritePin (LED_D_GPIO_Port, LED_D_Pin, RESET );
			HAL_GPIO_WritePin (LED_E_GPIO_Port, LED_E_Pin, SET );
			HAL_GPIO_WritePin (LED_F_GPIO_Port, LED_F_Pin, RESET );
			HAL_GPIO_WritePin (LED_G_GPIO_Port, LED_G_Pin, RESET );
			break;
		case 6:
			HAL_GPIO_WritePin (LED_A_GPIO_Port, LED_A_Pin, RESET );
			HAL_GPIO_WritePin (LED_B_GPIO_Port, LED_B_Pin, SET );
			HAL_GPIO_WritePin (LED_C_GPIO_Port, LED_C_Pin, RESET );
			HAL_GPIO_WritePin (LED_D_GPIO_Port, LED_D_Pin, RESET );
			HAL_GPIO_WritePin (LED_E_GPIO_Port, LED_E_Pin, RESET );
			HAL_GPIO_WritePin (LED_F_GPIO_Port, LED_F_Pin, RESET );
			HAL_GPIO_WritePin (LED_G_GPIO_Port, LED_G_Pin, RESET );
			break;
		case 7:
			HAL_GPIO_WritePin (LED_A_GPIO_Port, LED_A_Pin, RESET );
			HAL_GPIO_WritePin (LED_B_GPIO_Port, LED_B_Pin, RESET );
			HAL_GPIO_WritePin (LED_C_GPIO_Port, LED_C_Pin, RESET );
			HAL_GPIO_WritePin (LED_D_GPIO_Port, LED_D_Pin, SET );
			HAL_GPIO_WritePin (LED_E_GPIO_Port, LED_E_Pin, SET );
			HAL_GPIO_WritePin (LED_F_GPIO_Port, LED_F_Pin, SET );
			HAL_GPIO_WritePin (LED_G_GPIO_Port, LED_G_Pin, SET );
			break;
		case 8:
			HAL_GPIO_WritePin (LED_A_GPIO_Port, LED_A_Pin, RESET );
			HAL_GPIO_WritePin (LED_B_GPIO_Port, LED_B_Pin, RESET );
			HAL_GPIO_WritePin (LED_C_GPIO_Port, LED_C_Pin, RESET );
			HAL_GPIO_WritePin (LED_D_GPIO_Port, LED_D_Pin, RESET );
			HAL_GPIO_WritePin (LED_E_GPIO_Port, LED_E_Pin, RESET );
			HAL_GPIO_WritePin (LED_F_GPIO_Port, LED_F_Pin, RESET );
			HAL_GPIO_WritePin (LED_G_GPIO_Port, LED_G_Pin, RESET );
			break;
		case 9:
			HAL_GPIO_WritePin (LED_A_GPIO_Port, LED_A_Pin, RESET );
			HAL_GPIO_WritePin (LED_B_GPIO_Port, LED_B_Pin, RESET );
			HAL_GPIO_WritePin (LED_C_GPIO_Port, LED_C_Pin, RESET );
			HAL_GPIO_WritePin (LED_D_GPIO_Port, LED_D_Pin, RESET );
			HAL_GPIO_WritePin (LED_E_GPIO_Port, LED_E_Pin, SET );
			HAL_GPIO_WritePin (LED_F_GPIO_Port, LED_F_Pin, RESET );
			HAL_GPIO_WritePin (LED_G_GPIO_Port, LED_G_Pin, RESET );
			break;


		default:
			break;
	}
 }
