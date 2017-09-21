#ifndef LCD16x2_H
#define LCD16x2_H

#include <avr/io.h>


#define lcd_PORT PORTB		// LCD data port
#define lcd_cmd PORTA
#define en PA2				// enable signal
#define rw PA1				// read/write signal
#define rs PA0				// register select signal

void lcdCommand(unsigned char cmd);

void lcdData(unsigned char data);

void lcd_init();


void LCD_string(unsigned char *str)	;		//Function to send string

void clear_disp();

#endif