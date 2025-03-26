#include <iostream>
using namespace std;

int main() {
    char num1;
    char num2;

    cout << "Ingrese el primer caracter numerico: ";
    cin >> num1;

    cout << "Ingrese el segundo caracter numerico: ";
    cin >> num2;

    int valnum1 = static_cast<int>(num1);
    int valnum2 = static_cast<int>(num2);

    if ((valnum1 >= 48 & valnum1<= 57) && (valnum2 >= 48 & valnum2 <= 57)){
        cout << "Suma es: "<<(valnum1 + valnum2) - 96;
    }
    else cout << "Error: Solo se aceptan numeros.";
    return 0;
}
