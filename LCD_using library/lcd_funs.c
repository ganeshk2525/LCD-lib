
#define F_CPU 8000000
#include "LCD16x2_H.h"
#include <util/delay.h>

void lcdCommand(unsigned char cmd)
{
	lcd_PORT=cmd;
	lcd_cmd =(0<<rs)|(0<<rw)|(1<<en);		// RS and RW as LOW and EN as HIGH
	_delay_ms(1);
	lcd_cmd =(0<<rs)|(0<<rw)|(0<<en);		// RS, RW , LOW and EN as LOW
	_delay_ms(5);
}

void lcdData(unsigned char data)
{
	lcd_PORT= data;
	lcd_cmd = (1<<rs)|(0<<rw)|(1<<en);		// RW as LOW and RS, EN as HIGH
	_delay_ms(1);
	lcd_cmd = (1<<rs)|(0<<rw)|(0<<en);		// EN and RW as LOW and RS HIGH
	_delay_ms(5);							// delay to get things executed
}

void lcd_init()
{
	lcdCommand(0x38);			// initialization of 16X2 LCD in 8bit mode
	lcdCommand(0x01);			// clear LCD
	lcdCommand(0x0C);			// cursor OFF
	lcdCommand(0x80);			// ---8 go to first line and --0 is for 0th position
}


void LCD_string(char *str)			//Function to send string
{
	int i;
	for(i=0;str[i]!=0;i++)					//send each char of string till the NULL
	{
		lcdData(str[i]);
	}
}

void clear_disp()
{
	lcdCommand(0x01);
	lcdCommand(0x80);
}
