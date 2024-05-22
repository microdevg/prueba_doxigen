
#include "micro_spi.h"



micro_error_t micro_spi_init(spi_host_t spi){
    micro_error_t err = MICRO_OK;
    printf("[SPI%u] Inicio interfaz spi\n",spi);
   
    return err;
}



micro_error_t micro_spi_print(uart_host_t uart, const char* message){
    return MICRO_OK;
}



uint32_t micro_spi_write_bytes(uart_host_t uart, uint8_t* buffer, uint32_t len){
    return MICRO_OK;
}



uint32_t micro_spi_read_bytes(uart_host_t uart, uint8_t* buffer, uint32_t len){
    return MICRO_OK;
}
