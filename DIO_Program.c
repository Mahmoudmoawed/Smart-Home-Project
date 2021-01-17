/*		auther 	  		  : Abdallh Adel			*/
/*		Date       		  : 19 Oct 2020 			*/
/*		Version   		  : Version1 				*/
/*		description      : DIO_driver			*/

#include "STD_Types.h"
#include "BIT_MATH.h"
#include "DIO_private.h"
#include "DIO_confg.h"

void DIO_VidSetPinDirection			(u8 Copy_U8Port , 		u8 Copy_U8Pin 				, u8 Copy_U8Direction	)
{
		/* check if direction is output */
		if (1==Copy_U8Direction)
		{
			switch (Copy_U8Port)
			{
				case PORT_A : SET_BIT(DDRA,Copy_U8Pin); 	break ;    /*  port A  */
				case PORT_B : SET_BIT(DDRB,Copy_U8Pin); 	break ;	   /*  port B  */
				case PORT_C : SET_BIT(DDRC,Copy_U8Pin); 	break ;	   /*  port C  */
				case PORT_D : SET_BIT(DDRD,Copy_U8Pin); 	break ;	   /*  port D  */
				default : 		break ;
			}
		}
		else if (0== Copy_U8Direction) 		/* check if direction is output */
		{
			switch (Copy_U8Port)
			{
				case PORT_A : CLR_BIT(DDRA,Copy_U8Pin); 	break ;    /*  port A  */
				case PORT_B : CLR_BIT(DDRB,Copy_U8Pin); 	break ;	   /*  port B  */
				case PORT_C : CLR_BIT(DDRC,Copy_U8Pin); 	break ;	   /*  port C  */
				case PORT_D : CLR_BIT(DDRD,Copy_U8Pin); 	break ;	   /*  port D  */
				default : 		break ;
			}

		}
		else
		{
			
		}
}


void DIO_VidSetPinValue	(u8 Copy_u8Port ,u8 Copy_u8Pin 	, u8 Copy_u8Value)


{
		if (1==Copy_u8Value)
		{
			switch (Copy_u8Port)
			{
				case PORT_A : SET_BIT(PORTA,Copy_u8Pin); 	break ;    /*  port A  */
				case PORT_B : SET_BIT(PORTB,Copy_u8Pin); 	break ;	   /*  port B  */
				case PORT_C : SET_BIT(PORTC,Copy_u8Pin); 	break ;	   /*  port C  */
				case PORT_D : SET_BIT(PORTD,Copy_u8Pin); 	break ;	   /*  port D  */
				default : 		break ;
			}
		}
		else if (0== Copy_u8Value) 		/* check if direction is output */
		{
			switch (Copy_u8Port)
			{
				case PORT_A : CLR_BIT(PORTA,Copy_u8Pin); 	break ;    /*  port A  */
				case PORT_B : CLR_BIT(PORTB,Copy_u8Pin); 	break ;	   /*  port B  */
				case PORT_C : CLR_BIT(PORTC,Copy_u8Pin); 	break ;	   /*  port C  */
				case PORT_D : CLR_BIT(PORTD,Copy_u8Pin); 	break ;	   /*  port D  */
				default  : 		break ;
			}

		}
		else
		{
			
		}

}



void DIO_VidSetPortDirection(u8 Copy_u8Port,u8 Copy_U8Direction)
{

		switch(Copy_u8Port)
		{
			case PORT_A: DDRA=Copy_U8Direction; break;
			case PORT_B: DDRB=Copy_U8Direction; break;
			case PORT_C: DDRC=Copy_U8Direction; break;
			case PORT_D: DDRD=Copy_U8Direction; break;
			default: break;
		}


}

void DIO_VidSetPortValue(u8 Copy_u8Port,u8 Copy_u8Value)
{
		switch(Copy_u8Port)
		{
			case PORT_A: PORTA=Copy_u8Value; break;
			case PORT_B: PORTB=Copy_u8Value; break;
			case PORT_C: PORTC=Copy_u8Value; break;
			case PORT_D: PORTD=Copy_u8Value; break;
			default: break;
		}


}
u8 DIO_vidGetPinValue (u8 Copy_u8Port , u8 Copy_u8Pin	)
{
	u8 localPinValue;
	switch(Copy_u8Port)
	{

			case PORT_A: localPinValue=GET_BIT(PINA,Copy_u8Pin); break;
			case PORT_B: localPinValue=GET_BIT(PINB,Copy_u8Pin); break;
			case PORT_C: localPinValue=GET_BIT(PINC,Copy_u8Pin); break;
			case PORT_D: localPinValue=GET_BIT(PIND,Copy_u8Pin); break;
			default: break;
	}
	return localPinValue;
}

