/*
 * main.c
 *
 *  Created on: Oct 3, 2019
 *      Author: Boon
 */

#include "ICUAPPLICATION2.h"
static void APP_INIT(void)
{
	f32 f32TimerClock = /*0.000001*/ (128/(f32)16000000) ; /*Tick Time*/
	u32 u32Duty_cycle ;
	u32 u32Period;
	u32 u32Onperiod;
	u32 u32Freq = 0;

	char STR[4];

	lcd_init();

	TIMER0_void_Init();
	SET_BIT(TIMSK,TOIE1);
	TIMER0_void_SetCompareVal(127); /*	Duty 50% .. Freq = fcpu/(pre * counts)= (8000000 /8*256) */
	// F = 3906.25 HZ
	///init TIMER1
	/*Normal Mode .. Pre = 1024 .. enable ICU .. Rising Edge	*/
	TCCR1A = 0x00;
	TCCR1B = 0b01000010;

	TCNT1H = 0;
	TCNT1L = 0;

    EnableGlobalInterrupt();

	SET_BIT(TIMSK,5);	//enable ICU INT
//// end init

	while(u8flag!=3);
		//LCD_go_to_xy(2,0);
		//lcd_write_char('a');

		u32Period = u32temp2 - u32temp1;

		u32Onperiod = u32temp3 - u32temp2;

		u32Duty_cycle = ((u32Onperiod*100)/u32Period);

		u32Freq = (1.0 / ( u32Period * f32TimerClock ))+1;
		//lcd_write_char('a');
		/**************************************************/
		//lcd_write_string("Duty Cycle =");
		//LCD_go_to_xy(1,11);
		/********************************************/


		lcd_displyStr("Duty Cycle =");
		lcd_gotoRowColumn(0,11);
		lcd_displyStr(itoa(u32Duty_cycle,STR,10));
		/**************************************************/
		//LCD_WriteNumber(u32Duty_cycle);
		//lcd_write_string("%");
		/***************************************/

		lcd_displyChar('%');
		lcd_gotoRowColumn(2,0);

		/**************************************************/
		//LCD_go_to_xy(2,0);
		//lcd_write_string("Period =");
		//LCD_WriteNumber(u32Period);
		/**************************************************/
		//LCD_vidWriteString("Period =");
		//LCD_u8WriteINT(u32Period);
		/*****************************************************/
		lcd_displyStr("Freq = ");
		lcd_displyStr(itoa(u32Freq,STR,10));
}
static void APP_RUN(void)
	{

	}


static void __vector_6(void)
{
	if(u8flag==0){
		u32temp1=((u32)ICR1*(u32)1024/(u32)16000)+(u32)(((u32)Overflows*(u32)1024*(u32)65536)/(u32)16000);
		//ICR1=0;
		//Overflows=0;
		u8flag=1;
	}
	else if(u8flag==1){
		u32temp2=((u32)ICR1*(u32)1024/(u32)16000)+(u32)(((u32)Overflows*(u32)1024*(u32)65536)/(u32)16000);
		FLIP_BIT(TCCR1B,ICES1);
		//ICR1=0;
		//Overflows=0;
		u8flag=2;	
	}
	else if(u8flag==2){
		u32temp3=((u32)ICR1*(u32)1024/(u32)16000)+(u32)(((u32)Overflows*(u32)1024*(u32)65536)/(u32)16000);
		//ICR1=0;
		//Overflows=0;
		u8flag=3;	
	}

	
}
ISR(TIMER1_OVF_vect){
	Overflows++;
}