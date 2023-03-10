/*
 * ICUAPPLICATION1.h
 *
 * Created: 3/10/2023 7:47:20 PM
 *  Author: Dell
 */ 


#ifndef ICUAPPLICATION1_H_
#define ICUAPPLICATION1_H_

#define	F_CPU 16000000UL
#include <avr/io.h>
#include "../../MCAL/TIMER/TIMER0/std_types.h"
#include "../../MCAL/DIO/Bit_Math.h"
#include <stdlib.h>
#include <stdio.h>
#include "../../MCAL/DIO/dio.h"
#include "../../MCAL/INTERRUPT/EXTI0/EXTI0_int.h"
#include "../../MCAL/GIE/GIE.h"
#include "../../MCAL/TIMER/TIMER0/TIMR0_int.h"
//#include <avr/interrupt.h>

#include "../../ECUAL/LCD/lcd.h"
#include <util/delay.h>


static int firstReading = 1 ;
static ovf = 0 ;
static int previousState = 0 ;
static volatile unsigned char flag=0;
static ton = 0 ;
static toff = 0 ;
static duty = 0 ;
static freq = 0 ;
static float f = 0 ;
static char STR[10];

static void TOVF_APP (void);
static void EXTI0_APP (void);

static void APP_INIT(void);
static void APP_RUN(void);



#endif /* ICUAPPLICATION1_H_ */