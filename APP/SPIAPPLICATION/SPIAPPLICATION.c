/*
 * SPIAPPLICATION.c
 *
 * Created: 3/9/2023 1:14:40 PM
 * Author : Dell
 */ 
#include "SPIAPPLICATION.h"


static void APP_INIT(void)
{
	EnableGlobalInterrupt();
	SPI_void_SetCallBack(DisplayData);
	lcd_init();
    SPI_init(SLAVE,SPI_FOSC_8);
}
static void APP_RUN(void){
    {
		SPI_send(1);
		_delay_ms(500);
    }
}
static void DisplayData(){
	lcd_sendCmd(ClearLCD);
	lcd_displyChar(SPI_Receive());	
}
