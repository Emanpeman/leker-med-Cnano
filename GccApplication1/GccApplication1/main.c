/*
 * GccApplication1.c
 *
 * Created: 26.01.2022 22:33:29
 * Author : Emanuela
 */ 

#include <avr/io.h>
#define FCPU 16000
#include <util/delay.h>


#define LED_PIN 1<<3

int main(void)
{
    PORTB.DIRSET = 0xFF;
	
    while (1) 
    {
		PORTB.OUTSET |= LED_PIN;
		_delay_ms(1000);
		PORTB.OUTCLR |= LED_PIN;
		_delay_ms(1000);
    }
}

