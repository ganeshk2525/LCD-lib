#ifndef LCD16x2_H
#define LCD16x2_H

#include <avr/io.h>


#define lcd_PORT PORTB		// LCD data port
#define lcd_cmd PORTC
#define en PC2				// enable signal
#define rw PC1				// read/write signal
#define rs PC0				// register select signal

void lcdCommand(unsigned char cmd);

void lcdData(unsigned char data);

void lcd_init();


void LCD_string(char *str)	;		//Function to send string

void clear_disp();

#endif