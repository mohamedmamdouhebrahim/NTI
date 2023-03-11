/*
 * UARTAPPLICATION.h
 *
 * Created: 3/11/2023 9:29:27 PM
 *  Author: Dell
 */ 


#ifndef UARTAPPLICATION_H_
#define UARTAPPLICATION_H_

#include <avr/io.h>
#include "../../MCAL/UART/uart.h"
#include "../../ECUAL/LED/LED.h"
#include <util/delay.h>

static u8 cmd;

static void APP_INIT(void);
static void APP_RUN(void);


#endif /* UARTAPPLICATION_H_ */