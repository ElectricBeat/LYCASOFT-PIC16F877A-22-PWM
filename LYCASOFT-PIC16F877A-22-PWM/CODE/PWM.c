#include <pic.h>
#include <htc.h>
#define _XTAL_FREQ 20e6
__CONFIG(0X3F3A);

void main()
{
	int i;
	TRISC=0X00;
	PORTC=0X00;
	CCP1CON=0X0C;
	TMR2=0;
	PR2=255;
	T2CON=0X07;
	CCPR1H=0X00;
	CCPR1L=0X00;
	
	while(1)
	{
		for(i=0;i<256;i++)
		{
			CCPR1L=i;
			__delay_ms(10);
		}
	}
}			