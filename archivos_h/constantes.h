#ifndef CONSTANTES_H
#define CONSTANTES_H

#include <iostream>

const int MATERIALES_DISPONIBLES_MINIMO = 3;
const int EDIFICIOS_DISPONIBLES_MINIMO = 4;
const int BRINDAR_MATERIALES_MINA = 15;//piedras
const int BRINDAR_MATERIALES_ASERRADERO = 25;//maderas
const int BRINDAR_MATERIALES_FABRICA = 40;//metales

const char DELIMITADOR = ' ';

const std::string RUTA_MATERIALES = "../archivos_de_texto/materiales.txt";
const std::string RUTA_EDIFICIOS = "../archivos_de_texto/edificios.txt";
const std::string RUTA_MAPA = "../archivos_de_texto/mapa.txt";
const std::string RUTA_UBICACIONES = "../archivos_de_texto/ubicaciones.txt";
const std::string LINEA_DIVISORIA = "\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550";

const std::string COLOR_ROJO = "\e[38;5;196m";
const std::string COLOR_POR_DEFECTO = "\e[0m";
const std::string COLOR_VERDE = "\e[38;5;46m";
const std::string COLOR_VERDE_AGUA = "\e[38;5;35m";
const std::string COLOR_MARRON = "\e[38;5;136m";
const std::string FONDO_AZUL = "\e[48;5;27m";
const std::string FONDO_VERDE = "\e[48;5;2m";
const std::string FONDO_GRIS = "\e[48;5;240m";

#endif