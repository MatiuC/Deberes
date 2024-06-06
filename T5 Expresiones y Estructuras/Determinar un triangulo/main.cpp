//Autor Eduardo Castro
//GR1 2024-A
#include <iostream>
using namespace std;

int main(){
    double a,b,c;

    cout << "-Determinar un triangulo: " << endl;
    cout << "-Ingrese el primer lado: " << endl;
    cin >> a;
    cout << "-Ingrese el segundo lado: " << endl;
    cin >> b;
    cout << "-Ingrese el tercer lado: " << endl;
    cin >> c;

    //Check
    if (a+b > c && b+c > a && a+c > b ){
        cout << "El triangulo es posible" << endl;
    }
    else{
        cout << "El triangulo no es posible" << endl;
    }
    system("pause");
    return 0;
    }
