//Nombre: NOMBRE
//TP Nº 3
//EJ Nº 10
//Comentarios: Hacer un programa para ingresar una lista de 10 números, luego informar el máximo y el mínimo. 

#include <iostream>
using namespace std;

int main (void){

  int max, min;

  max = 0;
  min = 0;

  for(int i = 0; i < 10; i++)
  {
    int n;
    cout << "Ingrese el elemento numero " << i + 1 << ": ";
    cin >>  n;

    if(max == 0 && min == 0){
      max = n;
      min = n;
    } else if (n > max) {
      max = n;
    } else if (n < min){
      min = n;
    }
  }

  cout << "El mayor es " << max << " y el menor es " << min;

  return 0;
}