/*
 * InterruptApplication.c
 *
 * Created: 2/24/2023 11:30:16 AM
 * Author : Dell
 */ 

#include "INTERRUPTAPPLICATION1.h"

void APP_INIT(void)
	{
		EXT0_voidCallBack(LEDFUNCTION);
		EXT0_voidInit ();
		EXT0_voidEnable();
		EXT1_voidCallBack(LEDFUNCTION2);
		EXT1_voidInit ();
		EXT1_voidEnable();
		LED_INIT();
}	
void APP_RUN(void) 
    {		
    
}

void LEDFUNCTION(){
	LED_TOGGLE(RED_LED);
	_delay_ms(500);
}
void LEDFUNCTION2(){
	LED_TOGGLE(GREEN_LED);
	_delay_ms(500);
}
