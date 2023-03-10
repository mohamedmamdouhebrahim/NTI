/*
 * TimerApplication1.c
 *
 * Created: 2/26/2023 11:25:27 AM
 * Author : Dell
 */ 

#include "TIMERAPPLICATION1.h"

void APP_INIT(void)
{
	TIMER0_void_SetOVCallBack(LEDTOGGLE);
	LED_INIT();
	TIMER0_void_Init(); 
	TIMER0_void_EnableOVInt();
	EnableGlobalInterrupt();
}

void APP_RUN(void) 
    {

}

void LEDTOGGLE(){
	LED_TOGGLE(RED_LED);
}

