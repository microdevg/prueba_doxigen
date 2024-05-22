#ifndef _ERROR_H
#define _ERROR_H





/**
 * @enum Error
 * @brief Enumeración de posibles error que pueden retornar las funciones.
 */
typedef enum {
    MICRO_OK,                   /**< Retorno con éxito */
    MICRO_ERROR_FAIL,           /**< Retorno fallo */
    MICRO_ERROR_NO_MEM,         /**< Retorno fallo falta de memoria */
    MICRO_ERROR_UNKNOWN         /**< Retorno fallo desconocido */

} micro_error_t;




#endif