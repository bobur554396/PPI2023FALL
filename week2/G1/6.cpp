#include <iostream>
#include <bitset>

using namespace std;

int main(){
    /*
        & - bit operation (AND or multiplication *)
        | - bit operation (OR or sum +)
        ^ - bit operation (XOR)
            -> when both values are the same -> result = 0
            -> when values are different -> result = 1
        ~ - bit operation (invert) - invert current values to opposite 

        |=, &=, ^=
    */
    int a = 2;
    a += 4; // a = a + 4;
    
    a |= 3; // a = a | 3;

    int a = 5;
    int b = 2;
    // 0101 = 1 * 2^0 + 0 * 2^1 + 1 * 2^2 + 0 * 2^3 = 1 + 4 = 5;
    bitset<4> b1 = a;
    bitset<4> b2 = b;

    // bitset<4> res = (a & b);
    // bitset<4> res = (a | b);
    // bitset<4> res = (a ^ b);
    bitset<32> res = ~a;

    // 0101 -> invert (~) -> 1010
    // 0010
    // 0111

    // cout << b1 << endl;
    // cout << "^" << endl;
    // cout << b2 << endl;
    // cout << "=" << endl;
    // cout << res.to_ulong() << endl;
    cout << res << endl;
    cout << res.to_ulong() << endl;

    // reverse 0001 => 1000
    // invert  0001 => 1110



    return 0;
}

