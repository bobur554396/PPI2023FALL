#include <iostream>

using namespace std;
    /*
        cmath -> pow(base, exp) => pow(2, 3) => 2^3 = 8;

        2^3 => 1 * 2 * 2 * 2 = 8

        2^(-3) => 1 / 2^3 = 1 / 8 = 0.125;

    */

float my_pow(int base, int exp){
    float res = 1;

    if(exp > 0) {
        for(int i = 0; i < exp; i++){
            res *= base; // res = res * base;
        }
    } else {
        // exp is negative number
        exp *= -1;
        for(int i = 0; i < exp; i++){
            res *= base; // res = res * base;
        }
        res = 1 / res;
    }

    return res;
}


int main(){
    int a, b;
    cin >> a >> b;
    
    cout << my_pow(a, b) << endl;

    return 0;
}