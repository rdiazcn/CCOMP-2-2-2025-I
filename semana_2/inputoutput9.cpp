#include <iostream>

using namespace std;
/*

Implemente un programa que reciba una cadena de 4 caracteres (validar si tiene 4 caracteres)
e indicar si dicha cadena representa un palindromo

*/




int main() {
    string pal;
    cout << "Introduzca una cadena: ";
    cin >> pal;
    if (pal.size() == 4) {
        if (pal[0] == pal[3] && pal[1] && pal [2]) {
            cout <<"'"<< pal << "' es palindromo.";
        }
        else cout <<"'" << pal << "' no es palindromo.";
    }
    return 0;

}
