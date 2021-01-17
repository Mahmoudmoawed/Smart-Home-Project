#ifndef _MSPI_PRIVATE_H_
#define _MSPI_PRIVATE_H_

#define SPCR		*((volatile u8*)0x2D)
#define SPSR		*((volatile u8*)0x2E)
#define SPDR		*((volatile u8*)0x2F)


#define MSPI_MASTER		1
#define MSPI_SLAVE		0


#define MSPI_CLK_2			0b00
#define MSPI_CLK_4			0b00
#define MSPI_CLK_8			0b01
#define MSPI_CLK_16			0b01
#define MSPI_CLK_32			0b10
#define MSPI_CLK_64			0b10
#define MSPI_CLK_128		0b11

#define MSP_CLK_PHASE_SETUP		1		
#define MSP_CLK_PHASE_SAMPLE	0

#define MSPI_CLK_RISING		0
#define MSPI_CLK_FALLING		1	

#define MSPI_DATA_ORDER_MSB	0
#define MSPI_DATA_ORDER_LSB	1

#define MSPI_ENABLE		1
#define MSPI_DISABLE	0

#define MSPI_INTERRUPT_ENABLE	1
#define MSPI_INTERRUPT_DISABLE	0






#endif
