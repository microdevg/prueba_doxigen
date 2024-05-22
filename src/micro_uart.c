#include "micro_uart.h"

#define PARAMETER_ON_OFF(parameter)            (parameter >0)?"ON":"OFF"
#define PARAMETERS_PRINT                       ("Parametros de ocnfiguracion:\n")
#define PARAMETER_PRINT_BAUD                   ("\tBaudrate:%lu\n")
#define PARAMETER_PRINT_PARITY                 ("\tBit de paridad:%s\n")
#define PARAMETER_PRINT_BIT_START_END          ("\tBit inicio y final:%s\n")






micro_error_t micro_uart_init(uart_host_t uart, uint32_t baudrate,uint32_t parity,uint32_t bits){
    micro_error_t err ;
    printf("[UART%u] Inicio interfaz uart\n",uart);
    printf(PARAMETER_PRINT_PARITY,PARAMETER_ON_OFF(parity));
    printf(PARAMETER_PRINT_BIT_START_END,PARAMETER_ON_OFF(bits));
    return err;
}


