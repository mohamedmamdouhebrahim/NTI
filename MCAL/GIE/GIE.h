/*
 * GIE.h
 *
 * Created: 2/26/2023 12:02:59 PM
 *  Author: Dell
 */ 


#ifndef GIE_H_
#define GIE_H_

#include "bit_math.h"
#include "std_types.h"

#define SREG	 (*(volatile u8 * )0x5F)


void EnableGlobalInterrupt();
void DisableGlobalInterrupt();




#endif /* GIE_H_ */