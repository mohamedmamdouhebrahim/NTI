/*
 * StepperApplication.c
 *
 * Created: 2/25/2023 3:19:51 PM
 * Author : Dell
 */ 

#include "STEPPERAPPLICATION.h"

void APP_INIT(void)
	{
	Stepper_init();
	Stepper_moveFullStepDeg(FirstStepper,StepperForward,60);
	Stepper_moveFullStep(FirstStepper,StepperForward);
	Stepper_moveFullStep(FirstStepper,StepperReverse);	
	Stepper_moveHalfStep(FirstStepper,StepperForward);
}

void APP_RUN(void) 
   {
		
}

