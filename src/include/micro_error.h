#ifndef _ERROR_H
#define _ERROR_H

typedef enum {
    MICRO_OK,                   //> Resultado correcto de la operación
    MICRO_ERROR_FAIL,           //> La operación fallo
    MICRO_ERROR_NO_MEM,         //> Error por falta de memoria
    MICRO_ERROR_UNKNOWN         //> Error desconocido

} micro_error_t;




#endif