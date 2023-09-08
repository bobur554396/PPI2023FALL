#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float a1 = sqrt(9);
    float a2 = pow(2, 3); // power(base, exp) => base^exp => 2^3 = 8
    float a3 = min(2, 3); // 2
    float a4 = max(2, 3); // 3
    float a5 = min(10, max(2, 3)); // 3
    float a6 = round(2.6); // 3
    float a7 = ceil(2.001); // 3
    float a8 = floor(2.999); // 2
    
    // 90 degree => 90 * PI/180
    float pi = 3.14;
    float a9 = sin(90 * pi / 180);
    // cout << a9 << endl;
    float a10 = cos(90 * pi / 180);
    float a11 = tan(45 * pi / 180);
    float a12 = 1 / tan(45 * pi / 180);

    cout << a10 << endl;
    cout << a11 << endl;
    cout << a12 << endl;



    return 0;
}