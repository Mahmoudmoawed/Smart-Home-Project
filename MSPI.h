#ifndef _MSPI_H_
#define _MSPI_H_


/*
 *  according to the config.h file this function is used to configure the following  :
 *
 *  1-MSPI_NODE_MODE (MASTER/SLAVE)
 *  2-MSPI_CLK
 *  3-MSP_CLK_PHASE(SETUP/SAMPLE)
 *  4-MSPI_CLK_POLARITY(RISING/FALLIN)
 *  5-MSPI_DATA_ORDER(MSB/LSB)
 *  6-MSPI_MODE (ENABLE/DISABLE)
 *  7-MSPI_INTERRUPT_MODE (MSPI_INTERRUPT_DISABLE/MSPI_INTERRUPT_ENABLE)
 */
void MSPI_Init (void);



/*
 *  this function can be use to send a char data to the slave
 */
void MSPI_SendData (u8 COPY_U8Data) ;



/*
 *  this function can be use to receive data from master on the slave
 */
u8 MSPI_ReceiveData (void) ;




/*
 * this function is used on multi slaves codition :
 *
 *
 * 	1-you select a specific pin on the master node and pass
 * 	  the port number and the pin number to the function .
 * 	2-connect this pin to the slave's ss pin
 * 	3-pass the data you want to send to this slave .
 *
 *  copy_u8Master_Port Options :-
 *
 *  	1-PORT_A	0
 *  	2-PORT_B	1
 *  	3-PORT_C	2
 *  	4-PORT_D 	3
 *
 *
 *  Copy_u8Master_Pin Options :-
 *
 *  	1-PIN1	0
 *  	2-PIN2	1
 *  	3-PIN3	2
 *  	4-PIN4	3
 *  	5-PIN5	4
 *  	6-PIN6	5
 *  	7-PIN7	6
 *  	8-PIN8	7
 *
 *  copy_u8Data Options :-
 *
 *  	any data that u want to send to the slave which slave's ss pin is connected
 *  	to the pin that have been chosen on the master
 */
void MSPI_SendDataMaste (u8 copy_u8Master_Port,u8 Copy_u8Master_Pin,u8 copy_u8Data);






#endif
