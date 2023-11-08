#include <iostream>
#include <cmath>

using namespace std;
    /*
        cmath -> pow(base, exp) => pow(2, 3) => 2^3 = 8;

        2^3 => 1 * 2 * 2 * 2 = 8

        2^(-3) => 1 / 2^3 = 1 / 8 = 0.125;

    */

float my_pow(int base, int exp){
    float res = 1;
    for(int i = 0; i < abs(exp); i++){
        res *= base; 
    }

    if(exp < 0)
        res = 1 / res;
        
    return res;
}


int main(){
    int a, b;
    cin >> a >> b;
    
    cout << my_pow(a, b) << endl;

    return 0;
}