#include <iostream>
using namespace std;

/*

By listing the first six prime numbers: 2,3,5,7,11 and 13, we can see that the 6th prime is 13.

What is the 10001st prime number?

*/

int main() {
    int primenums{0}, div{0};
    for (int i=2;; i++) {
        for (int j = 1; j <= i;  j++) {
            if (i%j==0) div+=1;
        }
        if (div == 2) {
            primenums += 1;
            div = 0;
        }
        else div = 0;

        if (primenums == 10001) {
            cout <<"10001st prime number is: "<< i << endl;
            break;
        }
    }
}
