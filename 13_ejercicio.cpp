//Nombre: NOMBRE
//TP Nº 3
//EJ Nº 13
//Comentarios: Dada una lista de 7 números informar cual es el primer y último número impar ingresado.

#include <iostream>
using namespace std;

int main (void){

  int impar_1, impar_2;
  impar_1 = 0;
  impar_2 = 0;

  for(int i = 0; i < 7; i++)
  {
    int n;
    cout << "Ingrese el elemento numero " << i + 1 << ": ";
    cin >>  n;

    if(n % 2 != 0){
      if(impar_1 == 0){
        impar_1 = n;
      } else {
        impar_2 = n;
      }
    }
  }
  cout << "El primer impar es " << impar_1 << " y el segundo impar es " << impar_2;
  return 0;
}