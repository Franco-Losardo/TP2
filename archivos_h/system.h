#ifndef SYSTEM_H
#define SYSTEM_H

#include "../archivos_h/edificios.h"

#ifdef __linux__
#define CLR_SCREEN "clear"
#endif // __linux__

#ifdef __MINGW32__
#define CLR_SCREEN "CLS"
#endif // __MINGW32__

#ifdef __APPLE__
#define CLR_SCREEN "clear"
#endif // __APPLE__

#define PATH_MATERIALES "../archivos_de_texto/materiales.txt"
#define PATH_EDIFICIOS "../archivos_de_texto/edificios.txt"
#define PATH_UBICACIONES "../archivos_de_texto/ubicaciones.txt"
#define PATH_MAPA "../archivos_de_texto/mapa.txt"

const int EDIFICIOS_DISPONIBLES_MINIMO = 3

#endif