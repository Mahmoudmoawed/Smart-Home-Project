#include "STD_Types.h"
#include "BIT_MATH.h"
#include "USART_Private.h"

void USART_VidInit(void) {
	UBRRL=51; //boudrate 9600 for 8M
	UBRRH=0 ;
 // Set Frame Format -> 8 data, 1 stop, No Parity
 UCSRC = 0x86;
 // Enable RX and TX
 UCSRB = 0x18;

}

void USART_VidSendByte(const u8 copy_U8Data)
{
	while (!((UCSRA) & (1 << 5)));

	UDR = copy_U8Data;
}

u8 USART_U8RecieveByte(void)
{
	  u8 Result;
	  // Wait until Reception Complete
	  while((UCSRA&0x80) == 0x00);
	  Result = UDR;

	  /* Clear Flag */
	  SET_BIT(UCSRA,7);
	  return Result;
}



void USART_VidSendString(u8 *copy_Str) {
	u8 i = 0;
	while (copy_Str[i] != '\0') {
		USART_VidSendByte(copy_Str[i]);
		i++;
	}
}

void USART_VidReceiveString(u8 *copy_Str) {
	u8 i = 0;
	copy_Str[i] = USART_U8RecieveByte();
	while (copy_Str[i] != '#') {

		i++;
		copy_Str[i] = USART_U8RecieveByte();
	}
	copy_Str[i] = '\0';
}

