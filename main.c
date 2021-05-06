/*
 * CometSoundV3.c
 *
 * Created: 20-04-2021 22:19:18
 * Author : knn
  *  sound output is at PB1  (pin 15 on DIP-device).
 */ 

#define F_CPU 16000000
#include "Soundmodule2.h"
#include "IOfunc.h"
#include <util/delay.h>

int main(void)
{
	SoundSetup();/* Replace with your application code */
	setupBUTonPORTB(2);
	setupBUTonPORTB(3);
	setupBUTonPORTB(4);
	setupBUTonPORTB(5);
	while (1)
	{
		if (getBUT(2)) PlayNonBlocked();
		if (getBUT(3)) StopPlay();
		if (getBUT(2)) PlayNonBlocked();
		if (getBUT(4)) loopSound();
		if (getBUT(5)) doubleTime();
//		_delay_ms(2000);
	}
}

