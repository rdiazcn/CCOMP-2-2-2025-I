#include <iostream>
using namespace std;

/*
    Implemente un programa que solicite por teclado una cadena
    incluyendo espacios en blanco y una palabra e indique si dicha palabra
    se encuentra en dicha cadena y cuantas veces

*/

int main() {
    string cadena, palabra;
    cout << "Ingrese una cadena por favor: ";
    getline(cin,cadena);

    cout << "Ingrese la palabra a buscar: ";
    cin >> palabra;

    int i{0};
    int cont{0};
    while (i < cadena.length()) {
        int j{0};
        while (j < palabra.length()) {
            if (cadena.at(i) != palabra.at(j)) {
                break;
            }
            else {
                i++;
            }
            if (j+1 == palabra.length()) {
                cont+=1;
                break;
            }
            j++;
        }
        i++;
    }
    cout << cont;
}
