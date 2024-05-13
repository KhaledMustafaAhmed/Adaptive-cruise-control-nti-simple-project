/*
 ===================================================================================================
 Module      : TIMER
 File Name   : TIMER_PROG.c
 Author      : Khaled Mustafa
 Description : Source file for the AVR TIMER driver
 ===================================================================================================
 */

#ifndef TIMER1_INTERFACE_H_
#define TIMER1_INTERFACE_H_

#include "STD.h"
void M_Timer1_CTCMode_Init(void);
void M_Timer1_Void_SetCallBack(void(*Copy_Ptr)(void));
void M_Timer1_Void_Timer1DeInit(void);
#endif /* TIMER1_INTERFACE_H_ */
