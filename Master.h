/*
 * Master.h
 *
 *  Created on: Jan 16, 2021
 *      Author: Abdallh
 */

#ifndef MASTER_H_
#define MASTER_H_






void NodeONEInit (void); /* initate the master node */
u8 BluetoothReceive (void) ;
//void BluetoothReceive (u8 Copy_u8key);
void SendNodeTwo (u8 Copy_u8key);
void welcome (void);
void KeyToLCD	(u8 Key);




#endif /* MASTER_H_ */
