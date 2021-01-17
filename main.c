#include "STD_Types.h"
#include "Master.h"

int  main ()
{
	NodeONEInit();
	u8 KEY=255 ;
	while(1)
	{
		KEY=BluetoothReceive();
		SendNodeTwo(KEY);
		KeyToLCD(KEY);
	}
	return (u8)0;
}


