//Nombre: NOMBRE
//TP Nº
//EJ Nº
//Comentarios:

#include <iostream>
using namespace std;

int main (void){

  int n1, n2, a, b;

  cout << "Ingrese el primer numero: ";
  cin >> n1;
  cout << "Ingrese el segundo numero: ";
  cin >> n2;

  if(n1 < n2){
    a = n1;
    b = n2;
  } else {
    b = n1;
    a = n2;
  }

  for(int i = a; i <= b; i++)
  {
    cout << i << endl;
  }

  return 0;
}