//Nombre: NOMBRE
//TP Nº 3
//EJ Nº 18
//Comentarios: Hacer un programa para ingresar un número y luego informar la cantidad de divisores de ese número.

#include <iostream>
using namespace std;

int main (void){
  int n, acc;
  acc = 0;

  cout << "Ingrese el divisor: ";
  cin >> n;

  for(int i = 1; i <=n; i++)
  {
    if(n%i == 0){
      acc++;
    }
  }
  cout << acc << " divisores." << endl;
  return 0;
}