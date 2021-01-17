#include "STD_Types.h"
#include "BIT_MATH.h"
#include "MSPI_Private.h"
#include "MSPI_Config.h"
#include "MSPI.h"
#include "DIO_interface.h"
#include "DIO_confg.h"




void MSPI_Init (void)
{
#if MSPI_NODE_MODE == MSPI_MASTER
	DIO_VidSetPinDirection(PORT_B,PIN5,1);	//slave select pin
	DIO_VidSetPinDirection(PORT_B,PIN6,1);	//master output slave input pin
	DIO_VidSetPinDirection(PORT_B,PIN7,0);	//master input  slave output pin
	DIO_VidSetPinDirection(PORT_B,PIN8,1); 	//synch clk
#elif MSPI_NODE_MODE == MSPI_SLAVE
	DIO_VidSetPinDirection(PORT_B,PIN5,0); //slave select pin
	DIO_VidSetPinDirection(PORT_B,PIN6,0); //master output slave input pin
	DIO_VidSetPinDirection(PORT_B,PIN7,1); //master input  slave output pin
	DIO_VidSetPinDirection(PORT_B,PIN8,0); //synch clk
#endif


	SPCR|=(MSPI_CLK)<<0;
	SPCR|=(MSP_CLK_PHASE)<<2;
	SPCR|=(MSPI_CLK_POLARITY)<<3;
	SPCR|=(MSPI_NODE_MODE)<<4;
	SPCR|=(MSPI_DATA_ORDER)<<5;
	SPCR|=(MSPI_MODE)<<6;
	SPCR|=(MSPI_INTERRUPT_MODE)<<7 ;
}
void MSPI_SendData (u8 COPY_U8Data)
{
	SPDR=COPY_U8Data;
}
u8 MSPI_ReceiveData (void)
{
	while(((SPSR>>7)&1)==0);
	return SPDR ;
}
void MSPI_SendDataMaste (u8 copy_u8Master_Port,u8 Copy_u8Master_Pin,u8 copy_u8Data)
{
	DIO_VidSetPinDirection(copy_u8Master_Port,Copy_u8Master_Pin,1);
	DIO_VidSetPinValue(copy_u8Master_Port,Copy_u8Master_Pin,0);
	MSPI_SendData(copy_u8Data);
	while(((SPSR>>7)&1)==0);
	DIO_VidSetPinDirection(copy_u8Master_Port,Copy_u8Master_Pin,0);
	DIO_VidSetPinValue(copy_u8Master_Port,Copy_u8Master_Pin,0);

}
