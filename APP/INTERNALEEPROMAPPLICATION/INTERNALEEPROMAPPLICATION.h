/*
 * INTERNALEEPROMAPPLICATION.h
 *
 * Created: 3/11/2023 9:38:19 PM
 *  Author: Dell
 */ 



#ifndef INTERNALEEPROMAPPLICATION_H_
#define INTERNALEEPROMAPPLICATION_H_

#include <avr/io.h>
#include <avr/eeprom.h>
#include "../../MCAL/EEPROM/EEPROM.h"
#include "../../ECUAL/LCD/lcd.h"
#include "../../ECUAL/PushButton/PushButton.h"

static void APP_INIT(void);
static void APP_RUN(void);


#endif /* INTERNALEEPROMAPPLICATION_H_ */