/*
 * EEPROM_registers.h
 *
 * Created: 3/11/2023 10:51:50 AM
 *  Author: Dell
 */ 


#ifndef EEPROM_REGISTERS_H_
#define EEPROM_REGISTERS_H_

#define EEARH *((volatile u8*)0x3F)
#define EEAR9 1 
#define EEAR8 0

#define EEARL *((volatile u8*)0x3E)

#define EEAR *((volatile u16*)0x3E)

#define EEDR *((volatile u8*)0x3D)

#define EECR *((volatile u8*)0x3C)
#define EERIE 3
#define EEMWE 2
#define EEWE 1
#define EERE 0


#endif /* EEPROM_REGISTERS_H_ */