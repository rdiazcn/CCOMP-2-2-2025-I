#include <iostream>
using namespace std;

/*

The sum of the squares of the first ten natural numbers is,

            1^2 + 2^2 + ... + 10^2 = 285

The square of the sum of the first ten natural numbers is,

            (1 + 2 + ... + 10)^2 = 55^2 = 3025

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is

            3025 - 285 = 2640

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

*/

int main() {
    int sumofsquare{0},squareofsum{0};
    for (int i = 0; i <= 100; i++) {
        sumofsquare += i*i;
        squareofsum += i;
    }

    squareofsum*=squareofsum;
    cout << "Difference is: " << squareofsum - sumofsquare;
}
