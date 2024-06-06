#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]){
    int op = 0;
    float res = 0;
    string sig;
    cout << "|| Operando y operador || \n";
    cout << "Ingrese su operación \n* Recuerde usar solo los signos +, -, *, / \n";
    getline(cin, sig);
    //Extraer el primer numero hasta que lea un signo
    size_t pos = sig.find_first_of ("+-*/");
    //Buscar numero hasta el signo
    float a = stof(sig.substr(0, pos));
    //Buscar numero despues del signo
    float b = stof(sig.substr(pos + 1, sig.length() - pos - 1));
    if (sig.find("+") != string::npos) { //Verificar caracter con npos
        op = 1;
    }
    if (sig.find("-") != string::npos) {
        op = 2;
    }
    if (sig.find("*") != string::npos) {
        op = 3;
    }
    if (sig.find("/") != string::npos) {
        op = 4;
    }
    switch (op) {
        case 1:
           res = a + b;
            break;
        case 2:
           res = a - b;
            break;
        case 3:
           res = a * b;
            break;
        case 4:
           res = a / b;
            break;
        
        default :
            break;
    }

    cout << sig << " = " << res << endl;

    system("pause");
    return 0;
}

