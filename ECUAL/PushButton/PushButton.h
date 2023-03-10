/*
 * PushButton.h
 *
 * Created: 2/18/2023 8:53:30 AM
 *  Author: Dell
 */ 


#ifndef PUSHBUTTON_H_
#define PUSHBUTTON_H_

#include "../../MCAL/DIO/dio.h"
#include "PushButtonCfg.h"

typedef enum{
	Released = 0,
	Pressed = 1
}button_status;

void Button_init(void);
button_status Button_getStatus(u8 button_ID);




#endif /* PUSHBUTTON_H_ */