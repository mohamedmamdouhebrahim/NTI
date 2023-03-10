/*
 * NTI_Day1.c
 *
 * Created: 2/17/2023 11:45:13 AM
 * Author : Dell
 */ 

#include "LCDAPPLICATION.h"

void APP_INIT(void)
	{
		lcd_init();
}
void APP_RUN(void) 
    {
		for(int i=0;i<4;i++){
			lcd_gotoRowColumn(i,0);
			lcd_displyStr("Welcome to the NTI");
			_delay_ms(1000);
			lcd_sendCmd(ClearLCD);
    }
}

