#include <iostream>
#include <cmath>

using namespace std;
    // cmath -> pow(base, exp): pow(2, 3) => 2^3 = 8;
    // 2^3 = 1 * 2 * 2 * 2 = 8

    // 2^(-3) = 1 / 2 ^ 3;

float my_pow(int base, int exp){
    float res = 1;
    if(exp > 0){
        for(int i = 0; i < exp; i++){
            res *= base; // res = res * base;
        }
    } else {
        for(int i = 0; i < abs(exp); i++){
            res *= base; // res = res * base;
        }
        res = 1 / res;
    }
    return res; 
}


int main() {
    int n, m;
    cin >> n >> m;

    cout << my_pow(n, m) << endl;

    return 0;
}
  