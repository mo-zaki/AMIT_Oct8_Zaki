/*
 * DIO_interface.h
 *
 *  Created on: Jun 10, 2021
 *      Author: zaki
 */

#ifndef MCAL_DIO_INC_DIO_INTERFACE_H_
#define MCAL_DIO_INC_DIO_INTERFACE_H_
#include "BIT_math.h"
#include "STD_types.h"
#include "DIO_private.h"
#include "DIO_types.h"

void DIO_VoidSetPinDirection  (PORTX copy_PORTXPORT,PINX copy_PINXPIN,DIO_DIRACTION copy_DIO_DIRACTIONDirection);
void DIO_VoidSetPortDirection (PORTX copy_PORTXPORT,DIO_DIRACTION copy_DIO_DIRACTIONDirection);
void DIO_VoidSetPinValue      (PORTX copy_PORTXPORT,PINX copy_PINXPIN,DIO_VALUE copy_DIO_VALUEValue);
void DIO_VoidSetPortValue     (PORTX copy_PORTXPORT,DIO_VALUE copy_DIO_VALUEValue);
void DIO_VoidClearPinValue    (PORTX copy_PORTXPORT,PINX copy_PINXPIN);
void DIO_VoidClearPortValue   (PORTX copy_PORTXPORT);
void DIO_VoidTogglePinValue   (PORTX copy_PORTXPORT,PINX copy_PINXPIN);
DIO_VALUE   DIO_u8GetPinValue (PORTX copy_PORTXPORT,PINX copy_PINXPIN);
DIO_VALUE  DIO_u8GetPortValue (PORTX copy_PORTXPORT);


#endif /* MCAL_DIO_INC_DIO_INTERFACE_H_ */
