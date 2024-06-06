
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main(){
    int cantidad;
    float precio;
    string desc;
    string cliente, id, dir, product;
    cout << "Ingrese el precio de su producto: \n";
    cin >> precio;
    cin.ignore();
    cout << "Ingrese la cantidad: \n";
    cin >> cantidad;
    cin.ignore();
    cout << "Tiene descuento? \n S - Si \n N - No \n";
    cin >> desc;
    cout << "Ingrese el nombre del cliente: \n";
    cin.ignore();
    getline(cin, cliente);
    cout << "Ingrese la cédula del cliente: \n";
    getline(cin, id);
    cout << "Ingrese la dirección del cliente: \n";
    getline(cin, dir);
    cout << "Ingrese el nombre del producto: \n";
    getline(cin, product);
//Impresion de la Factura
        cout << "Precio del producto: " << precio << "$ USD" << endl;
        cout << "Unidades: " << cantidad << endl;
        cout << "Descuento: " << desc << endl;
        cout << "Datos personales \n";
        cout << "Nombre: " << cliente << endl;
        cout << "Cedula de identidad: " << id << endl;
        cout << "Dirección: " << dir << endl;
        cout << "Producto: " << product << endl << endl;

float total1, totaldesc;
total1 = precio*cantidad;
cout << fixed << setprecision(2);
totaldesc = total1 * -0.15;
        cout << setw(5) << "----------Factura----------" << endl;
        cout << setw(15) << " " << cliente << "\n" 
        << setw(15) << " " << dir  << endl << setw(15) << " " <<id << endl; 
        cout << left << "Producto: " << product << endl;
        cout << setw(20) << "Precio unitario: " << "\n " << right << setw (40) << precio << "$ \n";
        cout << left << setw(20) << "Unidades: " << "\n " << right << setw (40) << cantidad << endl;
        cout << left << setw(20) << "Total: " << "\n " << right << setw (40) << total1 << "$ \n";
        if (desc == "S"){
            cout << left << setw(20) << "Descuento: " << "\n " << right << setw (40) << totaldesc << "$"<< endl;
            cout << left << setw(20) << "Total tras descuento: " << "\n " << right << setw (40)
            << total1 + totaldesc << "$"<< endl ;
            cout << left << setw(20) << "I.V.A: 12%" << "\n " << right << setw (40) << (total1+totaldesc)*0.12 << "$ \n";
            cout << left << setw(20) << "Precio final" << "\n " << right << setw (40)
             << (total1+totaldesc) + (total1+totaldesc)*0.12 << "$ \n";
        }
        else{
            cout << left << setw(20) << "Descuento: " << "\n " << right << setw (40) << "SIN DESCUENTO" << endl;
            cout << left << setw(20) << "Total tras descuento: " << "\n " << right << setw (40)
            << total1 << "$"<< endl ;
            cout << left << setw(20) << "I.V.A: 12%" << "\n " << right << setw (40) << total1*0.12 << "$ \n";
             cout << left << setw(20) << "Precio final" << "\n " << right << setw (40)
              << (total1) + (total1)*0.12 << "$ \n";
        }


         
        
        
    return 0;
}
