//Autor: Eduardo Mateo Castro 
//Fahrenheit a Celsius
#include <iostream>
using namespace std;

int main() {
  double f, c;
  cout << "Conversion de °Fahrenheit a Celsius\n";
  cout << "Ingrese los grados en °Fahrenheit:\n ";
  cin >> f;
  c = (f - 32) * 5 / 9;
  cout << "La temperatura en Celcius es de " << c << "°C" << endl;
  
  return 0;
}