#ifndef _MICRO_H
#define _MICRO_H

#include "base.h"


typedef enum {
    UART_0  =(uint32_t)0, /*< UART 0 */
    UART_1  =(uint32_t)1, /*< UART 1 */
    UART_2  =(uint32_t)2, /*< UART 2 */
    UART_3  =(uint32_t)3, /*< UART 3 */
} uart_host_t;





typedef enum {
    SPI0  =(uint32_t)0, /*< SPI 0 */
    SPI1  =(uint32_t)1, /*< SPI 1 */
    SPI2  =(uint32_t)2, /*< SPI 2 */

} spi_host_t;


#endif