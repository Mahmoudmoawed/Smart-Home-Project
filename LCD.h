/*
 * LCD.h
 *
 *  Created on: Oct 23, 2020
 *      Author: Abdallh
 */

#ifndef LCD_H_
#define LCD_H_


void LCD_VidSendData (u8 U8Copy_Data);

void LCD_VidSendCommand (u8 U8Copy_Command);

void LCD_VidInit (void);

void LCD_ClrScreen (void);

void LCD_VidSendStr(u8 *PU);

void LCD_GoToXY (u8 Copy_U8Row,u8 Copy_U8Coulmn);


#endif /* LCD_H_ */
