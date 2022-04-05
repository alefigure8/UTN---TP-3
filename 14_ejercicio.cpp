//Nombre: NOMBRE
//TP Nº 3
//EJ Nº 14
//Comentarios: Hacer un programa para ingresar una lista de 8 números y luego informar si todos están ordenados en forma creciente. En caso de haber dos números “empatados” considerarlos como crecientes.

#include <iostream>
using namespace std;

int main (void){

  int acc;
  bool order;
  acc = 0;
  order = 1;

  for(int i = 0; i < 8; i++)
  {
    int n;
    cout << "Ingrese el elemento numero " << i + 1 << ": ";
    cin >>  n;

    if(acc == 0){
      acc = n;
    } else if (n >= acc){
      acc = n;
    } else {
      order = 0;
    }
  }

  if(order){
      cout << "La lista es ordenada";
  } else{
    cout <<  "La lista no es ordenada";
  }

  return 0;
}