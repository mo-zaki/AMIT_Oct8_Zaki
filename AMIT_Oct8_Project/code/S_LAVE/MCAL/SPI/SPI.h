/*
 * SPI.h
 *
 *  Created on: Jul 17, 2021
 *      Author: zaki
 */

#ifndef MCAL_SPI_SPI_H_
#define MCAL_SPI_SPI_H_

void SPI_Init(void);
void SPI_SendByte(unsigned char Data);
unsigned char SPI_ReadByte(void);
unsigned char SPI_ExchangeData(unsigned char Data);

#endif /* MCAL_SPI_SPI_H_ */
