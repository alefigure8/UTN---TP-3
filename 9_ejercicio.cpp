//Nombre: NOMBRE
//TP Nº 3
//EJ Nº 9
//Comentarios: Hacer un programa para ingresar una lista de 10 números, luego informar el máximo y la posición del máximo en la lista. 

#include <iostream>
using namespace std;

int main (void){

  int max, pos;

  for(int i = 0; i < 10; i++)
  {
    int n;
    cout << "Ingrese el elemento número " << i + 1 << ": ";
    cin >> n;
    if(n > max){
      max = n;
      pos = i + 1;
    }
  }

  cout << "El numero mayor es " << max << " y se encuentra en la posicion " << pos;

  return 0;
}