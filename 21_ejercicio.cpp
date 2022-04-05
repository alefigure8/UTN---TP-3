//Nombre: NOMBRE
//TP Nº 3
//EJ Nº 21
//Comentarios:  Dada una lista de 7 números informar el primer número par ingresado y su ubicación en la lista y el último de los números primos y su ubicación en la lista.

#include <iostream>
using namespace std;

int main (void){
  int primo, par, ubi_primo, ubi_par;

  primo = 0;
  par = 0;
  ubi_par = 0;
  ubi_primo = 0;

  for(int i = 1; i < 8; i++)
  {
    int n;
    int acc = 0;
    cout << "Ingrese el elemento numero " << i << ": ";
    cin >>  n;

    for(int x = 1; x <= n; x ++){

      if(n % x == 0){
        acc++;
      }

    }

    if(acc == 2){
      primo = n;
      ubi_primo = i;
    }

    if(n % 2 == 0 && par == 0){
      par = n;
      ubi_par = i;
    }

  }

  cout  << "Primer numero par: " << par << " Ubicacion: " << ubi_par << endl 
        << "Ultimo numero primo: " << primo <<  " Ubicacion: " << ubi_primo;

  return 0;
}