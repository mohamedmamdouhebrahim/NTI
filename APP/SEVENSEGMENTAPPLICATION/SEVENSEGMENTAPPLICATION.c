/*
 * Task1_7.c
 *
 * Created: 2/21/2023 3:25:55 PM
 * Author : Dell
 */ 
#include "SEVENSEGMENTAPPLICATION.h"

void APP_INIT(void)
{	
	SevenSegmentInit();
	Button_init();
}
void APP_RUN(void) 
    {
		SevenSegmentDisplay(counter);
		if(Button_getStatus(FirstPushButton) && counter<99){
			counter++;
			_delay_ms(500);
		}
		else if(Button_getStatus(SecondPushButton) && counter>0){
			counter--;
			_delay_ms(500);
		}
}

