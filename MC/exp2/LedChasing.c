	#include<reg51.h>
	void msdelay(unsigned int);

	void main(void)
	{
		unsigned int z;
		while(1)
		{	
				//P1=0x01;
				P1=0x80;
			for(z=0; z<8; z++)
			{
				msdelay(500);
				//P1=P1<<1;
				P1=P1>>1;
			}
			
			P1=0x01;
			for(z=0; z<8; z++)
			{
				msdelay(500);
				P1=P1<<1;
				//P1=P1>>1;
			}
			
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