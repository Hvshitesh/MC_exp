#include<p18f4550.h>
#include"vector_relocate.h"
 
 //declarations
 #define LCD_DATA    PORTD     			//LCD data port to postD
 #define ctr1        PORTE     			//lcd control port to protE
 #define rs          PORTEbits.RE0 		//register select signal to RE0
 #define rw    		 PORTEbits.RE1		//r/w signal to RE1
 #define en          PORTEbits.RE2		//enable singal to RE2

//function prototypes

void init_LCD();
void LCD_command(unsigned char );
void LCD_data(unsigned char );
void LCD_write_string(static char *str);
void msdelay(unsigned int time);
void msdelay(unsigned int time)
{
	unsigned int i,j;
		for(i=0;i<time;i++)
			for(j=0;j<710;j++);
}
//start of main program
void main(void)
{
	char var1[]="Welcome";
	char var2[]="PICT-ENTC";
	
	ADCON1=0x0F;	// AS DIGITAL I/O PINS
	TRISD=0x00;		//AS OUTPUT
	TRISE=0X00;		//AS OUTPUT
	
	init_LCD(); 	//FUNCTION CALL TO INITIALISE THE CLD
	msdelay(50);

	LCD_write_string(var1);	//display the message
	msdelay(15);


	LCD_command(0xC0);	//initialise the cursor to the second line
	LCD_write_string(var2);
	
	while(1);
}



void init_LCD()
{
	LCD_command(0x38);		//initialise the LCD
	msdelay(15);
	LCD_command(0x01);		//clear LCD
	msdelay(15);	
	LCD_command(0x0C);		//cursor OFF
	msdelay(15);
	LCD_command(0x80);		//go to first line
	msdelay(15);
}

void LCD_command(unsigned char cmd)
{
	LCD_DATA=cmd;
	rs=0;
	rw=0;		//writing to the LCD
	en=1;		//generating the high to low pulse on EN
	msdelay(15);
	en=0;
}
void LCD_data(unsigned char data)
{
	LCD_DATA=data;
	rs=1;
	rw=0;		//writing to the LCD
	en=1;		//generating the high to low pulse on EN
	msdelay(15);
	en=0;
}
void LCD_write_string(static char *str)
{
	int i=0;
	while(str[i])
	{
		LCD_data(str[i]);
		msdelay(15);
		i++;
	}

}