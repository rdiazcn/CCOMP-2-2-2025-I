#include <iostream>

using namespace std;

int main() {
    char c;
    cout << "Ingrese un caracter: ";
    cin >> c;

    int x = static_cast<int>(c);

    if (x >= 65 & x<= 90 ) {
        cout << "MAYUSCULA";
    }
    else if (x >= 97 & x<= 122) {
        cout << "minuscula.";
    }
    else {
        cout << "No es letra.";
    }
}

