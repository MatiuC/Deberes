//Autor Eduardo Castro
//GR1SW-2024A
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int contador=0;
    string palabras, lineas;
    fstream ipfile;

    ipfile.open("versos.txt");
    if (!ipfile.is_open()){
        cout << "El archivo no se pudo abrir. \n Verificar si existe.";
        return 1;
    }
        //Lectura de los archivos
        while (getline(ipfile, palabras) && (palabras != "*"))    {
        //Extraer palabras 
        lineas += palabras + "\n";
        }

        //Tranformar ES, Es, eS
        transform(lineas.begin(), lineas.end(), lineas.begin(), ::tolower);   
        
        // Contar las apariciones de "es"
        int count = 0;
        size_t pos = lineas.find("es");
        while (pos != std::string::npos) {
            contador++;
            pos = lineas.find("es", pos + 1);
        }
        cout << contador;
 }