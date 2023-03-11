/*
 * SPI_int.h
 *
 * Created: 3/9/2023 1:17:21 PM
 *  Author: Dell
 */ 


#ifndef SPI_INT_H_
#define SPI_INT_H_

#include "SPI_config.h"

void SPI_init(u8 mode,u8 prescaler);
void SPI_send(u8 data);
u8 SPI_Receive();
void SPI_void_SetCallBack(void (*Copy_ptr) (void) );

#endif /* SPI_INT_H_ */