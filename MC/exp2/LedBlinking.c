	#include<reg51.h>
	void msdelay(unsigned int);

	void main(void)
	{
		while(1)
		{	
			P1=0x55;
			msdelay(500);
			P1=0xAA;
			msdelay(500);
			
			/*P1=0x20;
			msdelay(500);
			P1=0x10;
			msdelay(500);
			
			P1=0x08;
			msdelay(500);
			P1=0x04;
			msdelay(500);
			P1=0x02;
			msdelay(500);
			P1=0x01;
			msdelay(500);*/
		}
	}
	void msdelay(unsigned int itime)
	{
		unsigned int i,j;
		
		for(i=0; i<itime; i++)
		{
			for(j=0;j<1275;j++)
			{
			//the generation of delay differes from compiler to compiler
				//for the ide we are u_sing 1275 generates 1ms delay
			}
		
		}
	}