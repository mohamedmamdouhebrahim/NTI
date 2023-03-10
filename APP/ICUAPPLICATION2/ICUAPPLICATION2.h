/*
 * ICUAPPLICATION2.h
 *
 * Created: 3/10/2023 7:58:48 PM
 *  Author: Dell
 */ 


#ifndef ICUAPPLICATION2_H_
#define ICUAPPLICATION2_H_

#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdlib.h>
#include "../../MCAL/DIO/std_types.h"
#include "../../MCAL/DIO/bit_math.h"

#include "../../MCAL/DIO/dio.h"

#include "../../ECUAL/LCD/lcd.h"

#include "../../MCAL/GIE/GIE.h"



#include "../../MCAL/TIMER/TIMER0/TIMR0_int.h"
#include "../../MCAL/TIMER/TIMER0/TIMR00_priv.h"

#define ICR1	*((volatile u16 * ) 0x46)

static void __vector_6(void)        __attribute__((signal,used)); //for ICU interrupt

static volatile u32 counter = 0;

static volatile u32 u32temp1;
static volatile u32 u32temp2;
static volatile u32 u32temp3;

static volatile u8 u8flag = 0;

static Overflows=0;

static void APP_INIT(void);
static void APP_RUN(void);


#endif /* ICUAPPLICATION2_H_ */