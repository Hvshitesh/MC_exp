#include<reg51.h>

void main(void)
{
	unsigned int i;
	while(1)
	{
		for(i=0;i<=255;i++)
		{
			P1=i;
		}
		for(i=255;i>0;i--)
		{
			P1=i;
		}
	}

}