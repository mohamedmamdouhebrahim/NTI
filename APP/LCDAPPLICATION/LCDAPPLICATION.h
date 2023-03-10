/*
 * LCDAPPLICATION.h
 *
 * Created: 3/9/2023 9:48:20 PM
 *  Author: Dell
 */
 


#ifndef LCDAPPLICATION_H_
#define LCDAPPLICATION_H_

#define F_CPU 16000000UL
#include "../../ECUAL/LED/LED.h"
#include "../../ECUAL/PushButton/PushButton.h"
#include "../../MCAL/DIO/dio.h"
#include "../../ECUAL/LCD/lcd.h"
#include <util/delay.h>

static void APP_INIT(void);
static void APP_RUN(void);


#endif /* LCDAPPLICATION_H_ */