/****************************************************************/
/*   Author             :    Ahmed Atia Atia 				    */
/*	 Date 				:    20 April 2019 						*/
/*	 Version 			:    1.0V 							 	*/
/*	 Description 		:   contain Dc Motors Pins configuration*/
/*             							[config.c] 				*/
/*								Link time configuration	in 		*/
/*										build process			*/
/****************************************************************/

#include "std_types.h"
#include "../../MCAL/DIO/dio.h"
#include "DcMotor_config.h"
#include "DcMotor_priv.h"



/*****************************************************************/
/* !comment : Array of struct ( DC Motors ) from config.c	 	 */
/*****************************************************************/

DcMotor ArrayOfMotor [ NUMBER_OF_MOTORS ] = 
{
	{DIO_PORTD,DIO_PIN0, DIO_PORTD,DIO_PIN7},
	{DIO_PORTD,DIO_PIN1, DIO_PORTD,DIO_PIN6},
	{DIO_PORTD,DIO_PIN2, DIO_PORTD,DIO_PIN5},
	{DIO_PORTD,DIO_PIN3, DIO_PORTD,DIO_PIN4}, 
	{DIO_PORTB,DIO_PIN0, DIO_PORTB,DIO_PIN7},
	
	
};

/***********************************************************************************************/
/************************************* END OF PROGRAM ******************************************/
/***********************************************************************************************/