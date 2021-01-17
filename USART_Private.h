#ifndef _USART_PRIVATE_H_
#define _USART_PRIVATE_H_

#define USART_BAUDRATE 9600

#define UDR     *((volatile u8*) 0x2C)
#define UCSRA   *((volatile u8*) 0x2B)
#define UCSRB   *((volatile u16*) 0x2A)
#define UBRRL   *((volatile u16*) 0x29)
#define UBRRH   *((volatile u16*) 0x40)
#define UCSRC   *((volatile u16*) 0x40)


#endif







