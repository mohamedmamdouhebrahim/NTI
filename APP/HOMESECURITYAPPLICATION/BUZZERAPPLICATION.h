/*
 * BUZZERAPPLICATION.h
 *
 * Created: 3/9/2023 9:55:04 PM
 *  Author: Dell
 */ 


#ifndef BUZZERAPPLICATION_H_
#define BUZZERAPPLICATION_H_

#include "../../ECUAL//LED/LED.h"
#include "../../ECUAL/PushButton/PushButton.h"
#include "../../ECUAL/Buzzer/Buzzer.h"

static u8 ButtonSequence[6] = {};//when was ButtonSequence[]={} it was always a correct password
static const u8 ActualButtonSequence[]={0,0,1,2,2,2};
static u8 ButtonSequenceCounter=0;

static void APP_INIT(void);
static void APP_RUN(void);


#endif /* BUZZERAPPLICATION_H_ */