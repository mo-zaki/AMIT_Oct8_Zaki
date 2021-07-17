/*
 * SPI_ATMEGA32A.h
 *
 * Created: 7/17/2020 6:30:32 AM
 *  Author: zaki
 */ 


#ifndef SPI_ATMEGA32A_H_
#define SPI_ATMEGA32A_H_



void SPI_Init(void);
void SPI_SendByte(unsigned char Data);
unsigned char SPI_ReadByte(void);
unsigned char SPI_ExchangeData(unsigned char Data);

#endif /* SPI_ATMEGA32A_H_ */