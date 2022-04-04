//Nombre: NOMBRE
//TP Nº 3
//EJ Nº 6
//Comentarios: Hacer un programa para ingresar un N valor que indica la cantidad de números que componen una lista y luego solicitar se ingresen esos N números. Se pide informar cuantos son positivos.

#include <iostream>
using namespace std;

int main (void){

  int n, pos;
  pos = 0;

  cout << "Ingrese la cantidad de elementos a listar: ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int j;

    cout << "Ingrese el elemento numero " << i + 1 << ": ";
    cin >> j;

    if(j > 0){
      pos++;
    }

  }

  cout << "La cantidad de numeros positvos es: " << pos;

  return 0;
}