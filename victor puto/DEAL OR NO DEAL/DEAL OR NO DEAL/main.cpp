#include "Cabeceras.h"


int main()
{
 char maletines[DIMENSION][DIMENSION] = {{1,2,3},{4,5,6},{7,8,9}};
 int premios[DIMENSION][DIMENSION];
 int maletinElegido;
 string maletinesDisponibles;
 Mensaje();
 MostrarJugadoresPrevios();
 MostrarMaletinesDisponibles(maletines);
 GuardarMaletinElegido();
 AbrirMaletines();



    return 0;
}
