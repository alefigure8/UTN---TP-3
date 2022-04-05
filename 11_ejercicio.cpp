//Nombre: NOMBRE
//TP Nº 3
//EJ Nº 11
//Comentarios: Hacer un programa para ingresar una lista 10 números e informar el máximo de los negativos y el mínimo de los positivos. 

#include <iostream>
using namespace std;

int main (void){
  int min_pos, max_neg;

  min_pos = 0;
  max_neg = 0;

  for(int i = 0; i < 10; i++)
  {
    int n;
    cout << "Ingrese el elemento numero " << i + 1 << ": ";
    cin >>  n;

    if(n > 0){
      if(min_pos == 0){
        min_pos = n;
      } else if ( n < min_pos){
        min_pos = n;
      }
    } else {
      if(max_neg == 0){
        max_neg = n;
      } else if ( n > max_neg){
        max_neg = n;
      }
    }
  }

  cout << "El menor positivo es " << min_pos << " y el mayor negativo es " << max_neg;
  return 0;
}