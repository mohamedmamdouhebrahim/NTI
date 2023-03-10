/*
 * NTI_DAY3.c
 *
 * Created: 2/19/2023 1:50:49 PM
 * Author : Dell
 */ 

#include "BUZZERAPPLICATION.h"

void APP_INIT(void)
	{
	LED_INIT();
	Button_init();
	BuzzerInit();
}
void APP_RUN(void) 
    {
		if (Button_getStatus(FirstPushButton)){
			
			ButtonSequence[ButtonSequenceCounter]=0;
			ButtonSequenceCounter++;
			_delay_ms(500);
			
		}
		else if(Button_getStatus(SecondPushButton)){
			ButtonSequence[ButtonSequenceCounter]=1;
			ButtonSequenceCounter++;
			_delay_ms(500);			
			
		}
		else if(Button_getStatus(ThirdPushButton)){
			ButtonSequence[ButtonSequenceCounter]=2;
			ButtonSequenceCounter++;
			_delay_ms(500);			
			
		}
		else if(Button_getStatus(FourthPushButton)){
			ButtonSequence[ButtonSequenceCounter]=3;
			ButtonSequenceCounter++;
			_delay_ms(500);			
			
		}
		if(ButtonSequenceCounter == 6){
			for(u8 ButtonSequenceCompareCounter=0;ButtonSequenceCompareCounter<6;ButtonSequenceCompareCounter++){
				if(ButtonSequence[ButtonSequenceCompareCounter]==ActualButtonSequence[ButtonSequenceCompareCounter]){
					if (ButtonSequenceCompareCounter==5)
					{
						LED_ON(RED_LED);
						_delay_ms(500);
						LED_OFF(RED_LED);
					}
				}
				else{
					BUZZER_ON();
					_delay_ms(500);
					BUZZER_OFF();
					break;
				}
			}
			ButtonSequenceCounter=0;
		}
	}
