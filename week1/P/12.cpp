#include <iostream>
#include <cmath>

using namespace std;

int main(){

    // float a = sqrt(10);
    // float a = pow(2, 3); // power(base, exp) = base ^ exp
    // float a = min(2, 3); 
    // float a = min(5, max(2, 10)); 
    // 90 degree => 90 * PI/180
    float pi = 3.14;

    // cout << M_PI << endl;
    // float a = sin(90 *  M_PI / 180);
    
    // float a = cos(90 *  M_PI / 180);
    // 6.12323e-17 -> 6.12 * 10^-17 -> 6.12/10^17 ~ 0

    // float a = tan(45 *  M_PI / 180);
    float a = 1 / tan(45 *  M_PI / 180);



    cout << a << endl;
    
    return 0;
}