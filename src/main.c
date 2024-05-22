#include <stdio.h>
#include "micro_uart.h"

int main(void){

    printf("Inicio el programa\n");
    micro_uart_init(UART_0,115200,0,1);



    return 0;
}