#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
    // 30. Leer una matriz 4x6 entera y determinar cuántas veces está en ella el número menor

    // Cambiamos la semilla del random
    srand (time(NULL));

    int matriz[4][6];
    // Llenamos la matriz al azar
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 6; j++){
            matriz[i][j] = (rand() % 16) + 1;
        }
        
    }
    
    // Variable para guardar el número menor
    int menor = 1000;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 6; j++){
            if(matriz[i][j] < menor && (matriz[i][j] % 2 == 0)){
                menor = matriz[i][j];
            }
        }
    }

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 6; j++){
            if(matriz[i][j] == menor){
                cout << "["<<i<<"]["<<j<<"]" << endl;
            }
        }
    }

    cout <<endl<<endl;
    for (int i = 0; i < 4; i++){
        cout << "|\t";
        for (int j = 0; j < 6; j++){
            cout << matriz[i][j] << "\t";
        }
        cout << "\t|"<<endl;
    }
    return 0;
}