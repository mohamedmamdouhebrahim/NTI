/*
 * INTERRUPTAPPLICATION1.h
 *
 * Created: 3/9/2023 9:52:17 PM
 *  Author: Dell
 */ 


#ifndef INTERRUPTAPPLICATION1_H_
#define INTERRUPTAPPLICATION1_H_

#define F_CPU 16000000UL
#include "../../MCAL/INTERRUPT/EXTI0/EXTI0_int.h"
#include "../../MCAL/INTERRUPT/EXTI1/EXTI1_int.h"
#include "../../ECUAL/LED/LED.h"
#include <util/delay.h>

void LEDFUNCTION (void);
void LEDFUNCTION2(void);

static void APP_INIT(void);
static void APP_RUN(void);


#endif /* INTERRUPTAPPLICATION1_H_ */