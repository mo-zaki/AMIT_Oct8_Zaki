/*
 * DIO.c
 *
 *  Created on: Jun 10, 2021
 *      Author: 5 stars
 */


#include "DIO_interface.h"
void DIO_VoidSetPinDirection  (PORTX copy_PORTXPORT,PINX copy_PINXPIN,DIO_DIRACTION copy_DIO_DIRACTIONDirection)
{
	if (OUTPUT==copy_DIO_DIRACTIONDirection)
	{
		switch(copy_PORTXPORT)
		{
			case portA :{SET_BIT(DDRA,copy_PINXPIN);break;}
			case portB :{SET_BIT(DDRB,copy_PINXPIN);break;}
			case portC :{SET_BIT(DDRC,copy_PINXPIN);break;}
			case portD :{SET_BIT(DDRD,copy_PINXPIN);break;}
		}
	}
	else if (INPUT==copy_DIO_DIRACTIONDirection)
	{
		switch(copy_PORTXPORT)
		{
			case portA :{CLEAR_BIT(DDRA,copy_PINXPIN);break;}
			case portB :{CLEAR_BIT(DDRB,copy_PINXPIN);break;}
			case portC :{CLEAR_BIT(DDRC,copy_PINXPIN);break;}
			case portD :{CLEAR_BIT(DDRD,copy_PINXPIN);break;}
		}

	}
}

void DIO_VoidSetPortDirection (PORTX copy_PORTXPORT,DIO_DIRACTION copy_DIO_DIRACTIONDirection)
{
	if(OUTPUT==copy_DIO_DIRACTIONDirection)
	{
		switch(copy_PORTXPORT)
		{
			case portA: {DDRA=0XFF;break;}
			case portB: {DDRB=0XFF;break;}
			case portC: {DDRC=0XFF;break;}
			case portD: {DDRD=0XFF;break;}
		}
	}
	else if (INPUT==copy_DIO_DIRACTIONDirection)
	{
		switch(copy_PORTXPORT)
		{
			case portA: {DDRA=0X00;break;}
			case portB: {DDRB=0X00;break;}
			case portC: {DDRC=0X00;break;}
			case portD: {DDRD=0X00;break;}
		}
	}
}

void DIO_VoidSetPinValue      (PORTX copy_PORTXPORT,PINX copy_PINXPIN,DIO_VALUE copy_DIO_VALUEValue)
{
	if (HIGH==copy_DIO_VALUEValue)
	{
		switch(copy_PORTXPORT)
		{
			case portA : {SET_BIT(PORTA,copy_PINXPIN);break;}
			case portB : {SET_BIT(PORTB,copy_PINXPIN);break;}
			case portC : {SET_BIT(PORTC,copy_PINXPIN);break;}
			case portD : {SET_BIT(PORTD,copy_PINXPIN);break;}
		}
	}
	else if (LOW==copy_DIO_VALUEValue)
	{
		switch(copy_PORTXPORT)
		{
			case portA : {CLEAR_BIT(PORTA,copy_PINXPIN);break;}
			case portB : {CLEAR_BIT(PORTA,copy_PINXPIN);break;}
			case portC : {CLEAR_BIT(PORTA,copy_PINXPIN);break;}
			case portD : {CLEAR_BIT(PORTA,copy_PINXPIN);break;}
		}
	}
}

void DIO_VoidSetPortValue     (PORTX copy_PORTXPORT,DIO_VALUE copy_DIO_VALUEValue)
{
	if(HIGH==copy_DIO_VALUEValue)
	{
		switch(copy_PORTXPORT)
		{
			case portA: {PORTA=0XFF;break;}
			case portB: {PORTB=0XFF;break;}
			case portC: {PORTC=0XFF;break;}
			case portD: {PORTD=0XFF;break;}
		}
	}
	else if (HIGH==copy_DIO_VALUEValue)
	{
		switch(copy_PORTXPORT)
		{
			case portA: {PORTA=0X00;break;}
			case portB: {PORTB=0X00;break;}
			case portC: {PORTC=0X00;break;}
			case portD: {PORTD=0X00;break;}
		}
	}
}

void DIO_VoidClearPinValue    (PORTX copy_PORTXPORT,PINX copy_PINXPIN)
{
	switch(copy_PORTXPORT)
	{
		case portA : {CLEAR_BIT(PORTA,copy_PINXPIN);break;}
		case portB : {CLEAR_BIT(PORTB,copy_PINXPIN);break;}
		case portC : {CLEAR_BIT(PORTC,copy_PINXPIN);break;}
		case portD : {CLEAR_BIT(PORTD,copy_PINXPIN);break;}
	}
}

void DIO_VoidClearPortValue   (PORTX copy_PORTXPORT)
{
	switch(copy_PORTXPORT)
	{
		case portA: {PORTA=0X00;break;}
		case portB: {PORTB=0X00;break;}
		case portC: {PORTC=0X00;break;}
		case portD: {PORTD=0X00;break;}
	}
}

void DIO_VoidTogglePinValue   (PORTX copy_PORTXPORT,PINX copy_PINXPIN)
{
switch(copy_PORTXPORT)
	{
		case portA : {TOGGLE_BIT(PORTA,copy_PINXPIN);break;}
		case portB : {TOGGLE_BIT(PORTB,copy_PINXPIN);break;}
		case portC : {TOGGLE_BIT(PORTC,copy_PINXPIN);break;}
		case portD : {TOGGLE_BIT(PORTD,copy_PINXPIN);break;}
	}
}

DIO_VALUE   DIO_u8GetPinValue(PORTX copy_PORTXPORT,PINX copy_PINXPIN)
{
	DIO_VALUE CheckPin =0;
switch(copy_PORTXPORT)
	{
		case portA : {CheckPin=CHECK_BIT(PINA,copy_PINXPIN);break;}
		case portB : {CheckPin=CHECK_BIT(PINB,copy_PINXPIN);break;}
		case portC : {CheckPin=CHECK_BIT(PINC,copy_PINXPIN);break;}
		case portD : {CheckPin=CHECK_BIT(PIND,copy_PINXPIN);break;}
	}
	return CheckPin ;
}

DIO_VALUE  DIO_u8GetPortValue       (PORTX copy_PORTXPORT)
{
DIO_VALUE CheckPin =0;
switch(copy_PORTXPORT)
	{
		case portA: {CheckPin=PINA;break;}
		case portB: {CheckPin=PINB;break;}
		case portC: {CheckPin=PINC;break;}
		case portD: {CheckPin=PIND;break;}
	}
	return CheckPin ;
}
