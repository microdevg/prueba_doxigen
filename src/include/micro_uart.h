#ifndef _UART_H
#define _UART_H

#include "micro.h"

typedef enum {
    UART_0  =(uint32_t)0,
    UART_1  =(uint32_t)1,
    UART_2  =(uint32_t)2,
    UART_3  =(uint32_t)3,
} uart_host_t;



micro_error_t micro_uart_init(uart_host_t uart, uint32_t baudrate,uint32_t parity,uint32_t bits);



micro_error_t micro_uart_print(uart_host_t uart, const char* message);

#endif