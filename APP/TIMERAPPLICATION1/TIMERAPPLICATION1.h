/*
 * TIMERAPPLICATION1.h
 *
 * Created: 3/9/2023 9:09:01 PM
 *  Author: Dell
 */ 


#ifndef TIMERAPPLICATION1_H_
#define TIMERAPPLICATION1_H_

#include "../../MCAL/TIMER/TIMER0/TIMR0_int.h"
#include "../../ECUAL/LED/LED.h"
#include "../../MCAL/GIE/GIE.h"

void LEDTOGGLE();

static void APP_INIT(void);
static void APP_RUN(void);



#endif /* TIMERAPPLICATION1_H_ */