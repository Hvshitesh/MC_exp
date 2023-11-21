#include<p18f4550.h>
#include"vector_relocate.h"



void msDelay(unsigned int time);

void main()
{
	TRISCbits.RC2=0;// set it as output
	TRISD=0;
	PR2=0xBA;
	CCP1CON=0x0C;
	T2CON=0x07;
	PORTDbits.RD5=1;
	PORTDbits.RD6=0;
	while(1)
	{
		//20% duty cycle
		CCPR1L=0x25;
		CCP1CONbits.DC1B0=0;
		CCP1CONbits.DC1B1=1;
		msDelay(1000);
		
		//40% duty cycle
		CCPR1L=0x4A;
		CCP1CONbits.DC1B0=1;
		CCP1CONbits.DC1B1=1;
		msDelay(1000);
		
		//60% duty cycle
		CCPR1L=0x74;
		CCP1CONbits.DC1B0=1;
		CCP1CONbits.DC1B1=0;
		msDelay(1000);
		
		//80% duty cycle
		CCPR1L=0x96;
		CCP1CONbits.DC1B0=0;
		CCP1CONbits.DC1B1=1;
		msDelay(1000);
	}
}
	void msDelay(unsigned int time)
	{
		unsigned int i,j;
		for(i=0;i<time;i++)
		{
			for(j=0;j<710;j++)
			{}
		}
			
		
	}