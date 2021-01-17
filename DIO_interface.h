#ifndef		_DIO_INTERFACE_H_
#define		_DIO_INTERFACE_H_

//#include "STD_Types.h"



void DIO_VidSetPinDirection			(u8 Copy_u8Port , 	u8 Copy_u8Pin , u8 Copy_u8Direction	);


void DIO_VidSetPortDirection	(u8 Copy_u8Port,u8 Copy_U8Direction) ;



void DIO_VidSetPinValue				(u8 Copy_u8Port , 	u8 Copy_u8Pin 	, u8 Copy_u8Value);


void	DIO_VidSetPortValue		(u8 Copy_u8Port,u8 Copy_u8Value);


void DIO_VidTogglePin 					(u8 Copy_u8Port ,		u8 Copy_u8Pin ) ;


u8 DIO_vidGetPinValue 					(u8 Copy_u8Port ,		 u8 Copy_u8Pin) ;











#endif
