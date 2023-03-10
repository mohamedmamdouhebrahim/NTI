/*
 * PWMApplication.c
 *
 * Created: 2/26/2023 1:59:02 PM
 * Author : Dell
 */ 

#include "PWMAPPLICATION1.h"

void APP_INIT(void)
	{
	dio_vidConfigChannel(DIO_PORTB,DIO_PIN3,OUTPUT);
	TIMER0_void_Init();
}
void APP_RUN(void) 
    {
		TIMER0_void_SetCompareVal(x++);
		_delay_ms(20);
}


