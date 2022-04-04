//Nombre: NOMBRE
//TP Nº 3
//EJ Nº 7
//Comentarios: Hacer un programa para ingresar una lista de 10 números, luego informar cuántos son positivos, cuántos son negativos, y cuántos iguales a cero. 

#include <iostream>
using namespace std;

int main (void){
  int pos, neg, cero;
  pos = 0;
  neg = 0;
  cero = 0;

  for(int i = 0; i < 10; i++)
  {
    int n;

    cout << "Ingrese el elemento numero " << i + 1 << ": ";
    cin >> n;

    if(n > 0){
      pos ++;
    } else if(n < 0){
      neg++;
    } else {
      cero++;
    }
  }

  cout << "La cantidad de elementos positivos es: " << pos << ", la de elementos negativos es: " << neg << " y la de elementos igual a cero es: " << cero;

  return 0;
}