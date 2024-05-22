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


# Generar un archivo de configuración de Doxygen si no existe
#if [ ! -f Doxyfile ]; then
#    doxygen -g
#fi

# Modificar el Doxyfile para ajustar la configuración
# sed -i 's/^PROJECT_NAME.*/PROJECT_NAME           = "Mi Proyecto en C"/' Doxyfile
# sed -i 's/^OUTPUT_DIRECTORY.*/OUTPUT_DIRECTORY       = docs/' Doxyfile
# sed -i 's|^INPUT.*|INPUT                  = src src/include|' Doxyfile
# sed -i 's/^FILE_PATTERNS.*/FILE_PATTERNS          = *.c *.h/' Doxyfile
# sed -i 's/^RECURSIVE.*/RECURSIVE              = YES/' Doxyfile


doxygen Doxyfile