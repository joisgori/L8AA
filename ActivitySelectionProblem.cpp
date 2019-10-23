#include <iostream>
using namespace std;

int inicio[11] = {0,1,2,3,3,5,5,6,8,8,12};
int fin[11] = {6,4,13,5,8,7,9,10,11,12,14};
int respuesta[11] = {0,0,0,0,0,0,0,0,0,0,0};
int tam = 11;

int main() {
  
  cout << "Problema de selección de actividades";

  for(int i = 0; i < tam; i++){
    //Inicio el primer arreglo, con su tiempo inicial y entro a su tiempo de fin
    for(int j = 0; j < i; j++){
      if(fin[j] < inicio[i] && respuesta[i] < respuesta[j]){
        respuesta[i] = respuesta[j];
        }  
    }
    respuesta[i]++;
  }
  cout << endl;
  cout << respuesta[10];
  return 0;
}
