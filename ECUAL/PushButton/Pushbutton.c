/*
 * Pushbutton.c
 *
 * Created: 2/18/2023 8:53:15 AM
 *  Author: Dell
 */ 

#include "PushButton.h"

void Button_init(void){
	dio_vidConfigChannel(DIO_PORTD,DIO_PIN7,INPUT);
	dio_vidConfigChannel(DIO_PORTD,DIO_PIN6,INPUT);
	dio_vidConfigChannel(DIO_PORTD,DIO_PIN5,INPUT);
	dio_vidConfigChannel(DIO_PORTD,DIO_PIN3,INPUT);
}
button_status Button_getStatus(u8 button_ID){
	static button_status ReturnedButtonStatus=Released;
	switch(button_ID){
		case 0:if(FirstPushButtonConfig == ButtonPulledDown)ReturnedButtonStatus=(button_status)dio_dioLevelReadChannel(DIO_PORTD,DIO_PIN7);else ReturnedButtonStatus=!(button_status)(dio_dioLevelReadChannel(DIO_PORTD,DIO_PIN7));break;
		case 1:if(SecondPushButtonConfig == ButtonPulledDown)ReturnedButtonStatus=(button_status)dio_dioLevelReadChannel(DIO_PORTD,DIO_PIN6);else ReturnedButtonStatus=!(button_status)(dio_dioLevelReadChannel(DIO_PORTD,DIO_PIN6));break;
		case 2:if(ThirdPushButtonConfig == ButtonPulledDown)ReturnedButtonStatus=(button_status)dio_dioLevelReadChannel(DIO_PORTD,DIO_PIN5);else ReturnedButtonStatus=!(button_status)(dio_dioLevelReadChannel(DIO_PORTD,DIO_PIN5));break;
		case 3:if(FourthPushButtonConfig == ButtonPulledDown)ReturnedButtonStatus=(button_status)dio_dioLevelReadChannel(DIO_PORTD,DIO_PIN3);else ReturnedButtonStatus=!(button_status)(dio_dioLevelReadChannel(DIO_PORTD,DIO_PIN3));break;
	}
	return ReturnedButtonStatus;
}