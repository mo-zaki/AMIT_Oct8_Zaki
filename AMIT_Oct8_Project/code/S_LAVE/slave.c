/*
 * slave.c
 *
 *  Created on: Jul 17, 2021
 *      Author: zaki
 */
#include "avr/io.h"
#include "SPI.h"
#include "UART.h"
#include "DIO_interface.h"
int main(void)
{
	/* Configure USART */
	UART0.EnableMode = USART_Tx_Rx;
	UART0.BaudRate = 9600;
	UART0.CommunicationMode = USART_Async_DoubleSpeed;
	UART0.ControlFrame = USART_ParityDisable_1Stop;
	UART0.DataFrame = USART_8bitData;
	UART0.CommunicationTerminal= USART_SingleProcessor;
	UART0.InterruptSource = USART_InterruptDisable;
	USART_Init();
	SPI_Init();
DIO_VoidSetPinDirection(portC, pin2, OUTPUT);
    while(1)
    {
		unsigned char Data = 0;

        Data = SPI_ReadByte();

		USART_SendByte_Blocking(Data);
		if(Data=='n')
		{
DIO_VoidSetPinValue(portC, pin2, HIGH)	;
		}
		if(Data=='f')
				{
DIO_VoidClearPinValue(portC, pin2)	;
				}

    }
}
