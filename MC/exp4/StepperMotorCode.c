#include<reg51.h>
void delay()
{
	int i;
	for(i=0;i<50;i++)
	{
		int j;
		for(j=0;j<1275;j++)
		{
			
		}
	}
}
void main(void)
{
	while(1)
	{
		
		P1=0x03;
		delay();
		P1=0x09;
		delay();
		P1=0x0C;
		delay();
		P1=0x06;
		delay();
	}
}