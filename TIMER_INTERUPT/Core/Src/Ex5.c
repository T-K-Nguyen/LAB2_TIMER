/*
 * Ex5.c
 *
 *  Created on: Oct 3, 2024
 *      Author: thuan
 */
#include "Ex5.h"

void updateClockBuffer(int hour, int minute){
	led_buffer[0] = hour/10;
	led_buffer[1] = hour%10;
	led_buffer[2] = minute/10;
	led_buffer[3] = minute%10;
}
