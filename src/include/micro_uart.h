/**
 * @file micro_uart.h
 * @brief Archivo con funciones para manejar los puertos UART del microcontrolador.
 */


#ifndef _UART_H
#define _UART_H


#include "micro.h"




/**
 * @brief Inicio el periférico UART del microcontrolador.
 * 
 * @param uart  HOST UART
 * @param baudrate Velocidad de la comunicación en baudrate.
 * @param parity  Bit de paridad.
 * @param bits Bit de inicio y parado
 * @return micro_error_t  
 */
micro_error_t micro_uart_init(uart_host_t uart, uint32_t baudrate,uint32_t parity,uint32_t bits);




/**
 * @brief Imprimo mensaje por puerto uart
 * 
 * @param uart  HOST UART
 * @param message Mensaje a transmitir
 * @return micro_error_t 
 */
micro_error_t micro_uart_print(uart_host_t uart, const char* message);

/**
 * @brief 
 * 
 * @param uart  HOST UART
 * @param buffer Buffer de datos a enviar
 * @param len Numero de byte del buffer
 * @return uint32_t Numero de bytes enviados correctamente
 */
uint32_t micro_uart_write_bytes(uart_host_t uart, uint8_t* buffer, uint32_t len);


/**
 * @brief 
 * 
 * @param uart 
 * @param buffer 
 * @param len 
 * @return uint32_t 
 */
uint32_t micro_uart_read_bytes(uart_host_t uart, uint8_t* buffer, uint32_t len);



#endif