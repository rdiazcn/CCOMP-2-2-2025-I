#include <iostream>
#include <cmath>
using namespace std;

/*

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is
9009=91x99.

Find the largest palindrome made from the product of two 3-digit numbers.

*/

bool isPalindrome (int num) {
    int u{0};
    int m = num / pow(10,5);

    for (int i = 6; i >= 1; i--){
        num = num % (static_cast<int>(pow(10, i)));
    }
    u = num;

    if (m == u) {
        return true;
    }
    else return false;
}

int main() {
    int largePal{0};
    int x{317}, y{317};
    while(x<1000 and y<1000) {
        int num = x*y;
        if (isPalindrome(num)){
            largePal = num;
        }
        x++;
        y++;
    }
    cout << largePal;
}
