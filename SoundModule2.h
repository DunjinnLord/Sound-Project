/*
 * SoundModule2.h
 *
 * Created: 20-04-2021 20:14:28
 *  Author: knn
  * sounddata from  DR archive
  resampled to
  resolution 8-bit
  samplerate 8kHz
  output using the 8-Bit Fast PWM mode. timer1 (a waste of bits)
  * Created: 13-03-2019 15:29:20
  *  Author: knn
  *  sound output is at PB1  (pin 15 on DIP-device).
 */ 
#ifndef SOUNDMODULE1_H_
#define SOUNDMODULE1_H_
void SoundSetup(void);
void StopPlay(void);
void PlayNonBlocked(void);
void loopSound(void);
void doubleTime(void);
#endif /* SOUNDMODULE1_H_ */