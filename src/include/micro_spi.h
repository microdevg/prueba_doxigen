/**
 * @file micro_spi.h
 * @brief Archivo con funciones para manejar los puertos SPI del microcontrolador.
 */


#ifndef _SPI_H
#define _SPI_H


#include "micro.h"




/**
 * @brief Inicio el periférico SPI del microcontrolador.
 * 
 * @param spi  HOST SPI

 * @return micro_error_t  
 */
micro_error_t micro_spi_init(spi_host_t spi);




/**
 * @brief Imprimo mensaje por puerto uart
 * 
 * @param spi  HOST SPI
 * @param message Mensaje a transmitir
 * @return micro_error_t 
 */
micro_error_t micro_spi_print(spi_host_t spi, const char* message);

/**
 * @brief 
 * 
 * @param spi  HOST SPI
 * @param buffer Buffer de datos a enviar
 * @param len Numero de byte del buffer
 * @return uint32_t Numero de bytes enviados correctamente
 */
uint32_t micro_spi_write_bytes(spi_host_t spi, uint8_t* buffer, uint32_t len);


/**
 * @brief 
 * 
 * @param spi HOST SPI 
 * @param buffer Buffer para guardar datos
 * @param len Numero de byte del buffer
 * @return uint32_t 
 */
uint32_t micro_spi_read_bytes(spi_host_t spi, uint8_t* buffer, uint32_t len);



#endif