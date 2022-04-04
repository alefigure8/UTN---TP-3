//Nombre: NOMBRE
//TP Nº 3
//EJ Nº 4
//Comentarios: Hacer un programa para que el usuario ingrese un número positivo y que luego se muestren por pantalla los números entre el 1 y el número ingresado por el usuario. 

#include <iostream>
using namespace std;

int main (void){
  int n;
  cout << "ingrese un numero ";
  cin >> n;

  for(int i = 1; i <= n; i++)
  {
    cout << i << endl;
  }
  return 0;
}