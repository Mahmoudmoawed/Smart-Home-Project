#ifndef _USART_INTERFACE_H_
#define _USART_INTERFACE_H_


void USART_VidInit(void);
void USART_VidSendByte(const u8 copy_U8Data);
u8 USART_U8RecieveByte(void);
void USART_VidSendString(u8 *copy_Str);
void USART_VidReceiveString(u8 *copy_Str);


#endif
