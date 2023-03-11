/*
 * INTERNALEEPROMAPPLICATION.c
 *
 * Created: 3/11/2023 10:45:20 AM
 * Author : Dell
 */ 

#include "INTERNALEEPROMAPPLICATION.h"

static void APP_INIT(void)
{
	Button_init();
	lcd_init();
	lcd_displyChar(EEPROM_read(512));
	lcd_displyChar(EEPROM_read(513));
	lcd_displyChar(EEPROM_read(514));
	lcd_displyChar(EEPROM_read(515));
	lcd_displyChar(EEPROM_read(516));
}
static void APP_RUN(void)
    {
		if (Button_getStatus(FirstPushButton))
		{
			    EEPROM_write(512,'K');
			    EEPROM_write(513,'A');
				EEPROM_write(514,'R');
				EEPROM_write(515,'I');
				EEPROM_write(516,'M');
		}
		if (Button_getStatus(SecondPushButton))
		{
			EEPROM_write(512,'A');
			EEPROM_write(513,'H');
			EEPROM_write(514,'M');
			EEPROM_write(515,'E');
			EEPROM_write(516,'D');
		}
		if (Button_getStatus(ThirdPushButton))
		{
			EEPROM_write(512,'A');
			EEPROM_write(513,'S');
			EEPROM_write(514,'H');
			EEPROM_write(515,'R');
			EEPROM_write(516,'F');
		}
		if (Button_getStatus(FourthPushButton))
		{
			EEPROM_write(512,'B');
			EEPROM_write(513,'A');
			EEPROM_write(514,'S');
			EEPROM_write(515,'E');
			EEPROM_write(516,'M');
		}
}

