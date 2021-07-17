/*
 * DIO_private.h
 *
 *  Created on: Jun 10, 2021
 *      Author: zaki
 */

#ifndef MCAL_DIO_INC_DIO_PRIVATE_H_
#define MCAL_DIO_INC_DIO_PRIVATE_H_


// groub_A
#define DDRA  (*(volatile u8*)0x3A)
#define PORTA (*(volatile u8*)0x3B)
#define PINA  (*(volatile u8*)0x39)

//groub_B
#define DDRB  (*(volatile u8*)0x37)
#define PORTB (*(volatile u8*)0x38)
#define PINB  (*(volatile u8*)0x36)

//groub_C
#define DDRC  (*(volatile u8*)0x34)
#define PORTC (*(volatile u8*)0x35)
#define PINC  (*(volatile u8*)0x33)

//groub_D
#define DDRD  (*(volatile u8*)0x31)
#define PORTD (*(volatile u8*)0x32)
#define PIND  (*(volatile u8*)0x30)
#endif /* MCAL_DIO_INC_DIO_PRIVATE_H_ */
