#include <iostream>
using namespace std;

int main() {
    string fullname;
    cout << "Ingresa tu nombre completo: "
    //cin >> fullname;
    getline(cin,fullname);

    cout << "Tu nombre es: " << fullname <<endl;
    return 0;
}
