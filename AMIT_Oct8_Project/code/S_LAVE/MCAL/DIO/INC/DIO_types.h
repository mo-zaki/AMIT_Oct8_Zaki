/*
 * DIO_types.h
 *
 *  Created on: Jun 10, 2021
 *      Author: zaki
 */

#ifndef MCAL_DIO_INC_DIO_TYPES_H_
#define MCAL_DIO_INC_DIO_TYPES_H_

typedef enum
{
	portA,
	portB,
	portC,
	portD
}PORTX;

typedef enum
{
	INPUT,
	OUTPUT
}DIO_DIRACTION;

typedef enum
{
	LOW,
	HIGH
}DIO_VALUE;

typedef enum
{
	pin0,
	pin1,
	pin2,
	pin3,
	pin4,
	pin5,
	pin6,
	pin7
}PINX;

#endif /* MCAL_DIO_INC_DIO_TYPES_H_ */
