/*
 * LCD_using_library.c
 *
 * Created: 14-March 3:48:23 PM
 *  Author: User
 */ 
#define F_CPU 8000000
#include <avr/io.h>
#include "LCD16x2_H.h"
#include <util/delay.h>

int main(void)
{
	_delay_ms(500);
	lcd_init();
	
	LCD_string("****calm***");
	while(1);
    
    return 0;
}