/*
 * SPIAPPLICATION.h
 *
 * Created: 3/11/2023 9:32:58 PM
 *  Author: Dell
 */ 


#ifndef SPIAPPLICATION_H_
#define SPIAPPLICATION_H_

#define F_CPU 16000000UL
#include <util/delay.h>
#include "../../MCAL/GIE/GIE.h"
#include "../../MCAL/SPI/SPI_int.h"
#include "../../ECUAL/LCD/lcd.h"

static void DisplayData();

static void APP_INIT(void);
static void APP_RUN(void);


#endif /* SPIAPPLICATION_H_ */