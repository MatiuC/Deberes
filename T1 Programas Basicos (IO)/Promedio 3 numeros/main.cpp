//Promedio de 3 Numeros
//Autor: Eduardo Castro
//Fecha: 27/08/2023
#include <iostream>
using namespace std;
int main() {
  double n1,n2,n3,prom;
  cout << "Ingrese el primer numero: ";
  cin >> n1;
  cout << "Ingrese el segundo numero: ";
  cin >> n2;
  cout << "Ingrese el tercer numero: ";
  cin >> n3;
  prom = (n1+n2+n3) / 3;
  cout << "El promedio es: " << prom << endl;
  
}