#include <iostream>
#include <math.h>
using namespace std;

int main() {
  double a, diametro, altura, radio, radio2, c;
  a = M_PI;
  cout << "Calculadora de volumen de un cono: " << endl;
  cout << "—————————————————————————————————————" << endl;

  cout << "Ingrese el diametro de la esfera: " << endl;
  cin >> diametro;
  radio = diametro / 2;
  cout << "Ingrese el altura de su cono: " << endl;
  cin >> altura;

  // CALCULO DE AREA
  c = 1.0 / 3.0;
  radio2 = pow(radio, 2);
  cout << "El area de su cono es: " << c * a * radio2 * altura << endl;

  return 0;
}