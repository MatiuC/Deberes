#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int a=1,b=2, suma=a+b, ultimonum=b;
    char aux;
    ofstream file; //Def del .txt
    file.open("sumas.txt"); //Crea el archivo
    if (!file.is_open()){
        cout << "El archivo no se pudo crear";
        return 1;
    }
    
     while (suma < 10000) {
       int temp = a + b;
       a=b;
       b=temp;
       suma=a+b;
       ultimonum=b;
       file << a << '+' << b << "= " << suma << endl;
    }
    cout << "El ultimo numero sumado fue: " << ultimonum;
    cout << "\n Puedes revisar las sumas en el archivo sumas.txt";
    return 0;
}