/**/
#include <iostream>
#include <string>
using namespace std;

int main(){
    string cadena;
    float dato, conv;
    const float p_to_cm = 2.64, mile_to_m=1609, g_to_li = 3.785,
    onz_to_gr=28.35, lb_to_kg=2.205;

    cout << "-" << "Programa de conversion de anglosajona a internacional" << endl;
    cout << "Para convertir ingrese su cantidad, acompañado de su unidad \n p-> pulgadas \n m-> millas \n f-> grados Fahrenheit";
    cout << "\n g-> galones liquidos \n o-> onzas \n l-> libras \n";

    //Recolectar dato
    getline(cin, cadena);
    //Separar numero
    size_t s = cadena.find_first_of("pmfgol");
       if (s == string::npos) {
        cout << "Entrada no válida. Por favor ingrese una cantidad seguida de una unidad (p, m, f, g, o, l)." << endl;
        return 1;
    }
    dato = stof(cadena.substr(0,s));
    //Separar char
    char unidad = cadena[s];
    const float  f_to_c =(dato - 32) * 5/9;

    switch (unidad)
    {
    case 'p':
        conv = dato * p_to_cm; 
        cout << conv << " cm" << endl;
        break;
    case 'm':
        conv = dato / mile_to_m; 
        cout << conv << " m" << endl;
        break;
    case 'f':
        conv = f_to_c; 
        cout << conv << " c" << endl;
        break;
    case 'g':
        conv = dato * g_to_li; 
        cout << conv << " l" << endl;
        break;
    case 'o':
        conv = dato * onz_to_gr; 
        cout << conv << " gr" << endl;
        break;
    case 'l':
        conv = dato * lb_to_kg; 
        cout << conv << " kg" << endl;
        break;
    
    default:
        cout << "Unidad no valida!" << endl;
        return 1;
        break;
    }

    system("pause");
    return 0;
}