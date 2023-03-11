/*
 * EEPROM.h
 *
 * Created: 3/11/2023 10:49:20 AM
 *  Author: Dell
 */ 


#ifndef EEPROM_H_
#define EEPROM_H_

#include "EEPROM_registers.h"

void EEPROM_write(unsigned int uiAddress, unsigned char ucData);
unsigned char EEPROM_read(unsigned int uiAddress);



#endif /* EEPROM_H_ */