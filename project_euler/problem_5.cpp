#include <iostream>
using namespace std;
/*

2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

*/


/* Brute Force
int main() {
    int div{21};
    while (true) {
        if (div % 5 == 0  & div % 7 == 0 & div % 9 == 0 & div % 11 == 0 & div % 13 == 0 & div % 16 == 0 & div % 17 == 0 & div % 19 == 0) {
            break;
        }
        div++;
    }
    cout << "Smallest positive number is: " << div;
    return 0;
}
*/

