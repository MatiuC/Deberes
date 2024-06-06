// Autor Eduardo Castro GR1BSW
/*Declarar las siguientes variables:
Variable entera llamada x (12).
Variable real llamada sigma (2,1836).
Variable entera llamada y (3).
Variable real llamada lambda (1,11695).
Variable real llamada alfa (328,67).
VVariable real llamada f.*/

#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int x = 12, y = 3;
  float sigma = 2.1836, lambda = 1.11695, alfa = 328.67, f;
  float a1,a;
  a1= x + (sigma * y);
  a = pow(x,2) - pow (y,2);
  cout << "Calculo de la formula: " << endl;
  f = 3 * (a1/a) - lambda * (alfa -13.7);
  cout << f;
}