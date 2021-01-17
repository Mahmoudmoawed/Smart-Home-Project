#ifndef _MSPI_CONFIG_H_
#define _MSPI_CONFIG_H_





/*
	Options :-
		1- MSPI_MASTER	
		2- MSPI_SLAVE	
*/
#define MSPI_NODE_MODE	MSPI_MASTER

/*
	Options :-
		1- MSPI_CLK_2		
		2- MSPI_CLK_4	
        3- MSPI_CLK_8	
        4- MSPI_CLK_16	
        5- MSPI_CLK_32	
		6- MSPI_CLK_64
        7- MSPI_CLK_128
*/


#define  MSPI_CLK		MSPI_CLK_64
/*
	Options :-
		1- MSP_CLK_PHASE_SETUP		
		2- MSP_CLK_PHASE_SAMPLE
	Master and Slave must be the same
*/

#define  MSP_CLK_PHASE	MSP_CLK_PHASE_SAMPLE

/*
	Options :-
		1- MSPI_CLK_RISING		
		2- MSPI_CLK_FALLING	
	Master and Slave must be the same

*/


#define  MSPI_CLK_POLARITY	MSPI_CLK_RISING

/*
	Options :-
		1- MSPI_DATA_ORDER_MSB	
		2- MSPI_DATA_ORDER_LSB

	Master and Slave must be the same

*/


#define MSPI_DATA_ORDER		MSPI_DATA_ORDER_LSB

/*
	Options :-
		1- MSPI_ENABLE		
		2- MSPI_DISABLE	
*/


#define MSPI_MODE	MSPI_ENABLE


/*
	Options :-
		1- MSPI_INTERRUPT_ENABLE	
		2- MSPI_INTERRUPT_DISABLE	
*/

#define MSPI_INTERRUPT_MODE	MSPI_INTERRUPT_DISABLE


#endif
