/*


 * Master.c
 *
 *  Created on: Jan 16, 2021
 *      Author: Abdallh
 */
#include "STD_Types.h"
#include "BIT_MATH.h"
#include "DIO_interface.h"
#include "DIO_confg.h"
#include "MSPI.h"
#include "USART_Interface.h"
#include "master_config.h"
#include "LCD.h"
#include "util/delay.h"



void NodeONEInit (void)
{
	MSPI_Init();
	DIO_VidSetPinDirection(PORT_D,PIN1,0); //Rx pin as input
	DIO_VidSetPinDirection(PORT_D,PIN2,1); //Tx pin as output
	USART_VidInit();
	LCD_VidInit();
}

u8 BluetoothReceive (void)
{
	u8 Copy_u8key ;
	Copy_u8key=USART_U8RecieveByte();
	return Copy_u8key ;
}

void SendNodeTwo (u8 Copy_u8key)
{
	MSPI_SendData(Copy_u8key) ;
}
//void welcome (void)
//{
//	LCD_GoToXY(0,5);
//	LCD_VidSendStr((u8*)"Welcome");
//	_delay_ms(2000);
//	LCD_ClrScreen();
//	LCD_GoToXY(0,0);
//	LCD_VidSendStr((u8*)"(1)TOG LED 1");
//	LCD_GoToXY(1,0);
//	LCD_VidSendStr((u8*)"(2)TOG LED 2");
//}
void KeyToLCD	(u8 Key)
{
	LCD_ClrScreen();
	LCD_VidSendData(Key);
}

