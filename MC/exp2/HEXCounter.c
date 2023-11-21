//HEX Counter	
	#include<reg51.h>
	void msdelay(unsigned int);
	
	void main(void)
	{
		unsigned int i;
		for(i=0;i<=255;i++)
		{
			P1=i;
			msdelay(2000);
		}
	}
	void msdelay(unsigned int time)
	{
		unsigned int i;
		unsigned int j;
		for( i=0;i<time;i++)
		{
			for(j=0;j<1275;j++)
			{
			}
			
		}
	}