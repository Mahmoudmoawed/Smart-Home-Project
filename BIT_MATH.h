#define		 SET_BIT(var,bit_num)		var|=(1<<bit_num)
#define		 CLR_BIT(var,bit_num)		var&=~(1<<bit_num)
#define 	 GET_BIT(var,bit)	    		(var>>bit)&1
#define		 TOG_BIT(var,bit)				var^=(1<<bit)