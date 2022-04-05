//Nombre: NOMBRE
//TP Nº 3
//EJ Nº 15
//Comentarios: Hacer un programa para ingresar 5 números, luego informar los 2 mayores valores ingresados, aclarando cual es el máximo y cual el que le sigue. 

#include <iostream>
using namespace std;

int main (void){
  int mayor_1, mayor_2;

  mayor_1 = 0;
  mayor_2 = 0;

  for(int i = 0; i < 5; i ++)
  {
    int n;
    cout << "Ingrese el elemento numero " << i + 1 << ": ";
    cin >>  n;

    if(mayor_1 == 0 && mayor_2 == 0){
      mayor_1 = n;
      mayor_2 = n;
    } else if(n > mayor_1){
      mayor_1 = n;
    } else if(n > mayor_2){
      mayor_2 = n;
    }
  }

  cout << "El primer mayor del listado es " << mayor_1 << " y el segundo mayor es " << mayor_2;

  return 0;
}