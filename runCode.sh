# Nombre de la carpeta donde estan los archivos fuente a compilar
SRC_DIR=src
OUT_DIR=build
#Creo carpeta, opcion -p implica que si la carpeta ya existe no hago nada
mkdir -p $OUT_DIR
PROGRAM_NAME=program
#Nombre de los archivos a compilar .c
C_SOURCE="$SRC_DIR/main.c $SRC_DIR/micro_uart.c "

#Nombrede los archivos a compilar .h
C_INCLUDE="-I$SRC_DIR/include" 

echo "Compilando programa $SRC_DIR con source $C_SOURCE"

# Comando gcc
gcc  $C_SOURCE    $C_INCLUDE  -o $OUT_DIR/$PROGRAM_NAME 


echo "Ejecutando programa"

# LLamo al programa compilado
./$OUT_DIR/$PROGRAM_NAME