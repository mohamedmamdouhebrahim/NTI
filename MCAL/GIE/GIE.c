/*
 * GIE.c
 *
 * Created: 2/26/2023 12:02:50 PM
 *  Author: Dell
 */ 

#include "GIE.h"

void EnableGlobalInterrupt(){
	SET_BIT(SREG,7);
}
void DisableGlobalInterrupt(){
	CLEAR_BIT(SREG,7);
}