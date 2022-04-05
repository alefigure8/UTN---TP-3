//Nombre: NOMBRE
//TP Nº 3
//EJ Nº 20
//Comentarios: Hacer un programa para ingresar un número y luego informar con un cartel aclaratorio si el mismo es un número perfecto o es número no perfecto.

#include <iostream>
using namespace std;

int main (void){
  int n, acc;
  acc = 0;

  cout << "Ingrese el divisor: ";
  cin >> n;

  for(int i = 1; i <n; i++)
  {
    if(n%i == 0){
      acc+=i;
    }
  }

  if(acc == n){
    cout << "Es un numero perfecto" << endl;
  } else {
    cout << "No es un numero perfecto" << endl;
  }
  return 0;
}