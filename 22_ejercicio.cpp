//Nombre: NOMBRE
//TP Nº
//EJ Nº
//Comentarios:

#include <iostream>
using namespace std;

int main (void){
  int acc = 0, ant = 0;

  for(int i = 0; i < 10; i++)
  {
    int n;
    cout << "Ingrese el elemento numero " << i + 1<< ": ";
    cin >>  n;

    if(n % 2 != 0){
      if( ant == 0){
        ant++;
      } else {
        acc++;
      }
    } else {
      ant = 0;
    }
  }

  cout << "Las duplas son: " << acc;

  return 0;
}