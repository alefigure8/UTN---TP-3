//Nombre: NOMBRE
//TP Nº 3
//EJ Nº 17
//Comentarios: Hacer un programa para ingresar un número y luego informar todos los divisores pares de ese número.

#include <iostream>
using namespace std;

int main (void){

  int n;
  cout << "Ingrese el divisor: ";
  cin >> n;

  for(int i = 1; i <=n; i++)
  {
    if(n%i == 0 && i%2 == 0){
      cout << i << endl;
    }
  }

  return 0;
}