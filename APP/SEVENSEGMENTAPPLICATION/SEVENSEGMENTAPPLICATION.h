/*
 * SEVENSEGMENTAPPLICATION.h
 *
 * Created: 3/9/2023 9:33:56 PM
 *  Author: Dell
 */ 


#ifndef SEVENSEGMENTAPPLICATION_H_
#define SEVENSEGMENTAPPLICATION_H_

#define F_CPU 16000000UL
#include <util/delay.h>
#include "../../ECUAL/SevenSegment/SevenSegment.h"
#include "../../ECUAL/PushButton/PushButton.h"
static u16 counter=0;

static void APP_INIT(void);
static void APP_RUN(void);



#endif /* SEVENSEGMENTAPPLICATION_H_ */