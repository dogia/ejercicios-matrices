#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
    // 26. Leer dos matrices 4x5 enteras y determinar si la cantidad de números pares almacenados
    // en una matriz es igual a la cantidad de números pares almacenados en la otra matriz.
    // Cambiamos la semilla del random
    srand (time(NULL));

    int matriz1[4][5];
    // Llenamos la matriz al azar
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5; j++){
            matriz1[i][j] = (rand() % 16) + 1;
        }
    }

    int matriz2[4][5];
    // Llenamos la matriz al azar
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5; j++){
            matriz2[i][j] = (rand() % 16) + 1;
        }
    }
    
    int pares_matriz1 = 0;
    int pares_matriz2 = 0;

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5; j++){
            if(matriz1[i][j] % 2 == 0){
                pares_matriz1++;
            }
            if(matriz2[i][j] % 2 == 0){
                pares_matriz2++;
            }
        }
    }

    if(pares_matriz1 == pares_matriz2){
        cout<<"Tienen la misma cantidad de pares"<<endl;
    }else{
        cout<<"No tienen la misma cantidad de pares"<<endl;
    }
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

    return 0;
}
