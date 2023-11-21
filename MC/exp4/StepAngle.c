#include<reg51.h>
void delay()
{
	int i;
	for(i=0;i<500;i++)
	{
		int j;
		for(j=0;j<1275;j++)
		{
			
		}
	}
}
void main(void)
{
	int i=0;
	//90 degree
	/*for( i=0;i<12;i++)
		{
		P1=0x06;
		delay();
			
		P1=0x0C;
		delay();
			
		P1=0x09;
		delay();
			
		P1=0x03;
		delay();
		}*/
		
				
		//180 degree
	for(i=0;i<25;i++)
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
		/*
		//270 degree
	for(i=0;i<37;i++)
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
		
		//360 degree
	for( i=0;i<50;i++)
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
		*/

}