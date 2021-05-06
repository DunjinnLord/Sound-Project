#include <avr/io.h>
#include <stdbool.h>
//Function definitions
void setupLEDonPORTB(unsigned char n)  //sets PORTB.n to be an output
{
	DDRB |= (1<<n);
}

void setupBUTonPORTB(unsigned char n)  //sets PORTB.n to be an input Button connected to ground
{
	DDRB &= ~(1<<n);
	PORTB |= (1<<n);
}

unsigned char getBUT(unsigned char n)  //  gets the immediate status of Button n....true for being pressed
{
	if (0 == (PINB & (1<<n)))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void setLED(unsigned char n, unsigned char flag)  // sets the output value on pin PORTB.n. High if flag is true
{
	if (flag)
	PORTB |= (1<<n); // PORTD pin1 is output for driving the LED
	else
	PORTB &= ~(1<<n); // PORTD pin1 is output for driving the LED
	
}
