/*
 * ADCAPPLICATION1.h
 *
 * Created: 3/2/2023 1:37:42 AM
 *  Author: Dell
 */ 


#ifndef ADCAPPLICATION1_H_
#define ADCAPPLICATION1_H_

#include <stdlib.h>
#include <stdio.h>
#include "../../ECUAL/LCD/lcd.h"
#include "../../MCAL/ADC/ADC_int.h"

static char str[4]={};
static u16 adcValue=255;

static void APP_INIT();
static void APP_RUN();

static void DisplayValue(void);


#endif /* ADCAPPLICATION1_H_ */