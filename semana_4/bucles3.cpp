#include <iostream>
using namespace std;
/* Implemente un programa que solicite una cadena
y verifique si es un palindromo*/
 int main() {
    string cadena;
    int i = 0;
    cout << "Ingrese una cadena por favor: ";
    getline(cin,cadena);

    while ( i < (cadena.length()/2) + 1 ) {
        if (cadena.at(i) != cadena.at(cadena.length()-(i+1))) {
            cout << "La cadena '"<< cadena <<"' no es un palindromo.";
            break;
        }
        else {
            if ( i == (cadena.length()/2) - 1 ) {
                cout << "La cadena '"<< cadena <<"' es un palindromo.";
            }
        }
        i++;
    }
}
