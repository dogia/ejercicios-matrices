#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

bool es_primo(int numero){
    /*
        6n+1 // P > 3
        6n+2 // multiplos de 2
        6n+3 // multiplos de 3
        6n+4 // multiplos de 2
        6n+5 // P > 3
    */
   if(numero < 2){ return false;}
   if(numero == 2){ return true;}
   if(numero == 3){ return true;}

    if(numero % 6 == 1 || numero % 6 == 5){
        for (int i = 5; i <= sqrt(numero); i = i+2){
            if(numero % i == 0){
                return false;
            }
        }
        return true;
    }else return false;
}

int main(){
    // 38. Leer dos matrices 4x6 enteras y determinar si el mayor número primo de una matriz está
    // repetido en la otra matriz.

    int matriz1[4][6], matriz2[4][6];
    
    srand(time(NULL));
    for(int i=0; i<4; i++){
        for(int j=0; j<6; j++){
            matriz1[i][j] = rand() % 16 + 1;
            matriz2[i][j] = rand() % 16 + 1;
        }
    }

    int mayor_primo = 0;
    // Mayor primo en la primera matriz
    for(int i=0; i<4; i++){
        for(int j=0; j<6; j++){
            if(matriz1[i][j] > mayor_primo && es_primo(matriz1[i][j])){
                mayor_primo = matriz1[i][j];
            }
        }
    }

    // Validamos que haya pasado por el if al menos una vez
    if(mayor_primo == 0){
        cout << "No se encontraron primos en la matriz 1" << endl;
    }else{
        for(int i=0; i<4; i++){
            for(int j=0; j<6; j++){
                if(matriz2[i][j] == mayor_primo){
                    cout << "El "<< mayor_primo << " si esta repetido.";
                    break;
                }
            }
        }
        cout<<endl<<endl;
        // Mostramos las matrices
        for (int i = 0; i < 4; i++){
            cout << "|\t";
            for (int j = 0; j < 6; j++){
                cout << matriz1[i][j] << "\t";
            }
            cout << "\t|"<<endl;
        }
        cout<<endl<<endl;
        for (int i = 0; i < 4; i++){
            cout << "|\t";
            for (int j = 0; j < 6; j++){
                cout << matriz2[i][j] << "\t";
            }
            cout << "\t|"<<endl;
        }
    }
    return 0;
}
