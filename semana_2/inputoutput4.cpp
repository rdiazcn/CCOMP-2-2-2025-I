#include <iostream>

using namespace std;

int main() {
    long num;
    cout << "Ingrese un numero por favor: ";
    cin >> num;

    if (num%2==0) cout << "El numero es par.";
    else cout << "El numero es impar.";

    return 0;
}
