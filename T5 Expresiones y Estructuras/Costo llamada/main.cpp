//Costo de la llamdada 60ctvs el min -> 1ctv el seg
#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;

main(){
char i;
cout << "Para inciar o finalizar la llamada ingrese cualquier tecla! \n";
cout << "| Iniciar llamada: \n" ;
cin >> i;
    if (i != ' '){
        clock_t start = clock();
        cout << "| Finalizar llamada: \n" ;
        cin >> i;
       if (i != ' '){
        clock_t end = clock();
        //Calcular tiempo 
        double tiempo = double(end - start) / CLOCKS_PER_SEC;
        cout << fixed << setprecision(2);
        cout << "Tiempo transcurrido: " << tiempo << " seg" << endl;
        cout << "Costo de la llamada: " << tiempo/100 << "$ USD" << endl;
       }
    }
    system("pause");
}