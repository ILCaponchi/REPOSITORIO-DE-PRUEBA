#include "Cabeceras.h"

void Mensaje()
{

cout<<"Bienvenido a ***DEAL OR NO DEAL***,el juego donde  SEGURAMENTE vas a perder! " <<endl;
cout<<"Elije uno de los siguientes maletines para conservar el premio en su interior,el cual podras canjear con la BANCA o guardarlo hasta el final y llevartelo\n.";
}


void MostrarMaletinesDisponibles(char maletines[DIMENSION][DIMENSION],string maletinesElegidos)
{

for(int i = 0; i< DIMENSION; i++){

        for (int j = 0; j < DIMENSION;j++)
        {
            while( maletines[i][j]== maletinesNoDisponibles(maletinesElegidos,maletines[DIMENSION][DIMENSION],i,j))
            {
                maletines[i][j] == '/0';

            cout<< maletines[i][j]<< "\t";
        }
        cout << endl<<endl;
    }


}



}


