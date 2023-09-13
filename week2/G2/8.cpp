#include <iostream>
#include <bitset>

using namespace std;

int main(){
    /*
        & - AND bitwise operator => assume as multiplication *
        | - OR bitwise operator => assume as sum +
        ^ - XOR bitwise operator:
            - when values are the same => result = 0
            - when values are different => result = 1
        ~ - INVERT -> switch the values to opposite 
    */
    int a = 5;
    int b = 2;
    bitset<32> b1 = a;
    bitset<4> b2 = b;
    // 0101 => 1 * 2^0 + 0 * 2^1 + 1 * 2^2 + 0 * 2^3 = 1 + 4 = 5
    
    // bitset<4> res = (a & b);
    // bitset<4> res = (a | b);
    // bitset<4> res = (a ^ b);
    bitset<32> res = ~a;
    // 0101 -> inverting -> 1010

    // 0101
    // 0010
    // 0111 => 7

    cout << b1 << endl;
    // cout << "&" << endl;
    // cout << b2 << endl;
    // cout << "=" << endl;
    cout << res << endl;


    /*
        reverse -> 0001 => 1000
        invert  -> 0001 => 1110
    */
    

    return 0;
}