/*
 * Ex3.h
 *
 *  Created on: Oct 3, 2024
 *      Author: thuan
 */

#ifndef INC_EX3_H_
#define INC_EX3_H_
#include "Ex2.h"

extern int timer1_flag;

void display7SEG(int num);
void setTimer1(int duration);
void timerRun();
void update7SEG (int* index );


#endif /* INC_EX3_H_ */
