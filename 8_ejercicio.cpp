//Nombre: NOMBRE
//TP Nº
//EJ Nº
//Comentarios:

#include <iostream>
using namespace std;

int main (void){
  int max;
  max = 0;

  for(int i = 0; i < 10; i++)
  {
    int n;

    cout << "Ingrese el elemento numero " << i + 1 << ": ";
    cin >> n;

    if(n > max){
      max = n;
    }
  }

  cout << "El numero maximo es: " << max;
  return 0;
}