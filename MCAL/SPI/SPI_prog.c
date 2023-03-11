/*
 * SPI_prog.c
 *
 * Created: 3/9/2023 1:16:25 PM
 *  Author: Dell
 */ 

#include "SPI_int.h"



void (*SPI_TransferComplete_CallBack) (void);

void SPI_void_SetCallBack(void (*Copy_ptr) (void) )
{
	SPI_TransferComplete_CallBack = Copy_ptr ;
}

void SPI_init(u8 mode,u8 prescaler){
	if (mode == MASTER)
	{
		SET_BIT(SPI_DDR,MOSI);
		SET_BIT(SPI_DDR,SCK);
		SET_BIT(SPI_DDR,SS);
		SET_BIT(SPI_PORT,SS);
		
		SET_BIT(SPCR,MSTR);
		
	switch(prescaler){
		case 0:CLEAR_BIT(SPSR,SPI2X);CLEAR_BIT(SPCR,SPR1);CLEAR_BIT(SPCR,SPR0);break;
		case 1:CLEAR_BIT(SPSR,SPI2X);CLEAR_BIT(SPCR,SPR1);SET_BIT(SPCR,SPR0);break;
		case 2:CLEAR_BIT(SPSR,SPI2X);SET_BIT(SPCR,SPR1);CLEAR_BIT(SPCR,SPR0);break;
		case 3:CLEAR_BIT(SPSR,SPI2X);SET_BIT(SPCR,SPR1);SET_BIT(SPCR,SPR0);break;
		case 4:SET_BIT(SPSR,SPI2X);CLEAR_BIT(SPCR,SPR1);CLEAR_BIT(SPCR,SPR0);break;
		case 5:SET_BIT(SPSR,SPI2X);CLEAR_BIT(SPCR,SPR1);SET_BIT(SPCR,SPR0);break;
		case 6:SET_BIT(SPSR,SPI2X);SET_BIT(SPCR,SPR1);CLEAR_BIT(SPCR,SPR0);break;
		case 7:SET_BIT(SPSR,SPI2X);SET_BIT(SPCR,SPR1);SET_BIT(SPCR,SPR0);break;
	}
	}
	else if(mode == SLAVE){
		CLEAR_BIT(SPI_DDR,MISO);
		
		CLEAR_BIT(SPCR,MSTR);		
		
	}
	SET_BIT(SPCR,SPIE);
	SET_BIT(SPCR,SPE);
	

	
}
void SPI_send(u8 data){
	volatile u8 flush_data=0;
	CLEAR_BIT(SPI_PORT,SS);
	SPDR=data;
	while(!CHECK_BIT(SPSR,SPIF));
	flush_data=SPDR;
	SET_BIT(SPI_PORT,SS);
}

u8 SPI_Receive(){
	while(!(SPSR & (1<<SPIF)));
	return SPDR;
}
void __vector_12(void) __attribute__((signal , used));
void __vector_12(void)
{
	
	SPI_TransferComplete_CallBack();
}