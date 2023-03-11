/*
 * UARTAPPLICATION1.c
 *
 * Created: 3/3/2023 10:53:58 AM
 * Author : Dell
 */ 

#include "UARTAPPLICATION.h"
static void APP_INIT(void)
{
    UART_init(9600);
	LED_INIT();
}
static void APP_RUN(void) 
    {
		cmd = UART_receive_char();
		UART_Println("JIMMY");
		if(cmd =='a')
			LED_ON(RED_LED);
		if (cmd=='b')
		{
			LED_OFF(RED_LED);	
		}
		_delay_ms(1000);
}

