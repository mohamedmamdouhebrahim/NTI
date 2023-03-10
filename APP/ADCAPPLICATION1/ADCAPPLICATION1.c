/*
 * ADCapplication.c
 *
 * Created: 2/24/2023 3:40:35 PM
 * Author : Dell
 */ 

#include "ADCAPPLICATION1.h"

static void APP_INIT()
{
	ADC_voidCallBack(DisplayValue);
	lcd_init();
    ADC_voidInit();
	ADC_voidInterrputEnable();
	ADC_voidEnable();
}
static void APP_RUN()
    {
		ADC_voidStartConversion();
 		_delay_ms(1000);
}

static void DisplayValue(){
		adcValue = ADC_u16ReadADCInMV();
		lcd_sendCmd(ClearLCD);
		lcd_displyStr("ADC Value: ");
		lcd_displyStr(itoa(adcValue, str, 10));
}
