/*
 * LCD.c
 *
 *  Created on: Oct 23, 2020
 *      Author: Abdallh
 */


#include "STD_Types.h"
#include "DIO_interface.h"
#include "LCD_Config.h"
#include "DIO_confg.h"
#include "util/delay.h"


void LCD_VidSendData (u8 U8Copy_Data)
{
	/* RS=HIGH to send data */
	DIO_VidSetPinValue(LCD_CONTROL_PORT,LCD_RS,HIGH);

	/* RW=LOW */
	DIO_VidSetPinValue(LCD_CONTROL_PORT,LCD_RW,LOW);

	/* send data on data port */
	DIO_VidSetPortValue(LCD_DATA_PORT,U8Copy_Data);

	/* Enable = HIGH */
	DIO_VidSetPinValue(LCD_CONTROL_PORT,LCD_EN,HIGH);
	_delay_ms(1);

	/* Enable=LOW */
	DIO_VidSetPinValue(LCD_CONTROL_PORT,LCD_EN,LOW);
	_delay_ms(1);

}
void LCD_VidSendCommand (u8 U8Copy_Command)
{
	/* RS=HIGH to send command */
	DIO_VidSetPinValue(LCD_CONTROL_PORT,LCD_RS,LOW);

	/*RW=LOW */
	DIO_VidSetPinValue(LCD_CONTROL_PORT,LCD_RW,LOW);

	/*send Command on Data Port */
	DIO_VidSetPortValue(LCD_DATA_PORT,U8Copy_Command);

	/* Enable = HIGH */
	DIO_VidSetPinValue(LCD_CONTROL_PORT,LCD_EN,HIGH);
	_delay_ms(1);

	/* Enable=LOW */
	DIO_VidSetPinValue(LCD_CONTROL_PORT,LCD_EN,LOW);
	_delay_ms(1);

}

void LCD_VidInit (void)
{
	/*set data and control ports as output*/
	DIO_VidSetPortDirection(LCD_CONTROL_PORT,OUTPUT);
	DIO_VidSetPortDirection(LCD_DATA_PORT,OUTPUT);
	_delay_ms(50);

	/*set function command */
	LCD_VidSendCommand(0b00111000);
	_delay_ms(1);

	/* display on Command */
	LCD_VidSendCommand(0b00001100);
	_delay_ms(1) ;

	/* clear screen command */
	LCD_VidSendCommand(0b00000001);
	_delay_ms(2);

	/* entry mood */
	LCD_VidSendCommand(0b00000110);
	_delay_ms(2);

}
void LCD_ClrScreen (void)
{
	/*send CLear screen command */
	LCD_VidSendCommand(0b00000001);
}

void LCD_VidSendStr(u8 *PU)
{
	while (*PU!=0)
	{
		LCD_VidSendData(*PU);
		PU++ ;
	}
}

void LCD_GoToXY (u8 Copy_U8Row,u8 Copy_U8Coulmn)
{
	if (Copy_U8Row==0)
	{
		LCD_VidSendCommand(128+Copy_U8Coulmn);
	}
	else if (Copy_U8Row==1)
	{
		LCD_VidSendCommand(128+64+Copy_U8Coulmn);
	}
}


