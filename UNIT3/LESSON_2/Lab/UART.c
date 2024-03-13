#include "UART.h"

#define UART0DR *((volatile uint32_t*)((uint32_t*)0x101f1000))

void Uart_send_string(uint8_t* P_tx_string)
{
	while(*P_tx_string !='\0')
	{
		UART0DR = (uint32_t)(*P_tx_string);
		P_tx_string++;
	}
}