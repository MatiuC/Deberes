#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int num, contador=0, num1, acum,mayor,menor;
    ifstream file; //Def del .txt
    file.open("numeros.txt");
    if (!file.is_open()){
        cout << "El archivo no existe";
        return 1;
    }
        //contar cuantos numeros hay
        file >> num;  //primer numero (necesario, si no el while suma 1 más)
        while (num !=0){
            file >> num1;
            if (num1>num){
                mayor = num1;
            }
            if (num1<num && num1!=0){
                menor = num1;
            }
            num = num1;
            contador++;
            acum = acum + num;
        }
    

        cout << "El mayor de los numeros es: " << mayor <<endl;
        cout << "El menor de los numeros es: " << menor <<endl;
        cout << "El promedio de los numeros es: " << acum/contador << endl;
    return 0;

}