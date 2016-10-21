#ifndef CABECERAS_H_INCLUDED
#define CABECERAS_H_INCLUDED
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;
const int DIMENSION =3;
const string nombreJugador,maletinesElegidos;
 void Mensaje();
 void MostrarJugadoresPrevios();
 char EleccionJugador();
 void MostrarMaletinesDisponibles(char maletines[DIMENSION][DIMENSION],maletinesElegidos);
 int GuardarMaletinElegido();
 void AbrirMaletines();
 char maletinesNoDisponibles();

#endif // CABECERAS_H_INCLUDED
