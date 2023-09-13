#include <iostream>

using namespace std;

int main(){
    /*
        + - * / %
        increment / decrement number values
    */

    int a = 2; // 2
    a += 4; // a += 4; <=> a = a + 4; // 6
    a -= 3; // a -= 3; <=> a = a - 3; // 3

    int b = 3;
    b++; // b++ => b = b + 1; => 4
    b++; // b++ => b = b + 1; => 5
    // b = b + 1; // 4
    // b = b + 1; // 5
    b--; // b--; <=> b = b - 1; => 4

    return 0;
}