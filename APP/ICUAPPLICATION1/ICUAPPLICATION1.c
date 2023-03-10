/*
 * main.c
 *
 *  Created on: May 11, 2019
 *      Author: Boon
 */

#include "ICUAPPLICATION1.h"


static void TOVF_APP (void){
//void __vector_11 (void) __attribute__ ((signal,used, externally_visible)) ;
//void __vector_11 (void)
//ISR(TIMER0_OVF_vect)
//{
	ovf++;
}
static void EXTI0_APP (void){
//void __vector_1 (void) __attribute__ ((signal,used, externally_visible));
//void __vector_1 (void)
//ISR(INT0_vect)
//{


	if(flag){
			EXT0_voidSetSignalch(RISING);
			ton =(u32)(((float)TCNT0*1024.0/16000.0))+((u32)((u32)ovf*1024.0*(u32)256.0)/16000.0);
			flag=0;
		}
		else{
			EXT0_voidSetSignalch(FALLING);
			toff =(u32)(((float)TCNT0*1024.0/16000.0))+((u32)((u32)ovf*1024.0*(u32)256.0)/16000.0);
			flag=1;
		}
		ovf=0;
		TCNT0=0;
}




static void APP_INIT(void)
{
	EXT0_voidSetSignalch(RISING);
	TIMER0_void_SetOVCallBack(TOVF_APP);
	EXT0_voidCallBack(EXTI0_APP);

	//DIO_voidInitialization();
	EXT0_voidInit();
	lcd_init();

	TIMER0_void_Init();

	TIMER0_void_EnableOVInt();

	EXT0_voidEnable();
	EnableGlobalInterrupt();
	/*	pre 1024 .. mode CTC "Duty 50%" .. F = fcpu/(pre* counts) = 30.5 HZ	*/
	TCCR2 = 0b00011111;
	OCR2 = 127;
}
static void APP_RUN(void)
	{
		duty = (100 * ton) /( ton + toff);
		f = (float)1000.0 / (float)(ton + toff); // T period = TON + TOFF
		freq = (u8) f ;
		lcd_sendCmd(0x80);
		lcd_sendCmd(ClearLCD);
		lcd_displyStr((u8 *)"Freq = ");
		lcd_displyStr(itoa(freq,STR,10));
		lcd_displyStr((u8 *)" HZ");
		lcd_gotoRowColumn(2 , 0);
		lcd_displyStr((u8 *)  "Duty = ");
		lcd_displyStr(itoa(duty,STR,10));
		lcd_displyChar('%');
	_delay_ms(500);
}
