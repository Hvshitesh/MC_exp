#include<p18f4550.h>

extern void _startup(void);
void timer_isr(void);

#pragma code RESET_INTERRUPT_VECTOR=0x1000

void _reset(void)
{
	_asm
			goto _startup
		_endasm
}
#pragma code

void main()
{
	ADCON1=0x0F;
	INTCON2bits.RBPU=0;
	TRISBbits.TRISB0=0;
	PORTBbits.RB0=0;
	T0CON=0x03;
	TMR0H=0x6D;
	TMR0L=0x26;
	INTCONbits.TMR0IF=0;
	INTCONbits.TMR0IE=1;
	INTCONbits.GIE=1;
	T0CONbits.TMR0ON=1;
	while(1);
}

#pragma code HIGH_INTERRUPT_VECTOR=0x1008
void high_ISR(void)
{
	_asm
			goto timer_isr
		_endasm
	
}
#pragma code

//timer ISR function prototype//
#pragma interrupt timer_isr
void timer_isr(void)
{
	TMR0H=0x6D;
	TMR0L=0x26;
	PORTBbits.RB0=~PORTBbits.RB0;
	INTCONbits.TMR0IF=0;
}