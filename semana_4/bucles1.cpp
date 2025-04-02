#include <iostream>
using namespace std;

int main() {
    string name = "Ciencia de la Computacion";
    int len = name.length();
    int i = 0, c{0};
    while (i < len) {
        cout << name.at(i) << " ";
        if (name.at(i) == 'i') {c+=1;}
        i += 1;
    }
    cout << "\nNumero de 'i's: " << c;
}
