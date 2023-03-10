/*
 * PWMAPPLICATION1.h
 *
 * Created: 3/9/2023 9:40:20 PM
 *  Author: Dell
 */ 


#ifndef PWMAPPLICATION1_H_
#define PWMAPPLICATION1_H_

#include "../../MCAL/TIMER/TIMER0/TIMR0_int.h"
#include "../../ECUAL/LED/LED.h"
#include "../../MCAL/DIO/dio.h"
#include <util/delay.h>

static void APP_INIT(void);
static void APP_RUN(void);

static u8 x=0;

#endif /* PWMAPPLICATION1_H_ */