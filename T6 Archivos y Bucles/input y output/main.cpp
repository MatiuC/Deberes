#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    int num, pos, num1, invertido=0;
    fstream ipfile, auxfile;
    ofstream opfile;

    ipfile.open("input.txt");
        if (!ipfile.is_open()){
        cout << "El archivo no se puedo abrir. " << endl;
        return 1;
        }
    
    //output file
    opfile.open("salida.txt");
        if (!opfile.is_open()){
        cout << "El archivo no se puedo crear. " << endl;
        return 1;
        }

    //Lectura de todos los numeros
    ipfile >> num;
    while (num != 0) {
        ipfile >> num1;
        
        if (num > 0 && num != pos){ //Segmentación de los mayores que 0
            pos = num;
            while (pos!=0) {
                invertido = (invertido * 10) + (pos % 10);
                pos = pos / 10;
            }   
            
            opfile << invertido << endl;
        }
        num = num1;
        invertido=0;
    }
    cout << "Invertido con exito!!. \n Puede revisar en el archivo salida.txt";
    return 0;
}