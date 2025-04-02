#include <iostream>
using namespace std;

int main() {
    string cadena;
    char caracter;
    int len, i{0}, cont{0};

    cout << "Ingrese una cadena por favor: ";
    getline(cin,cadena);
    cout << "Ingrese un caracter: ";
    cin>>caracter;
    len = cadena.length();

    while (i  < len) {
        if (cadena.at(i) == caracter) {
            cont += 1;
        }
        i+=1;
    }

    cout << "El numero de veces que aparece el caracter " << caracter << " es: " << cont << "." << endl;
}
