#include <iostream>

using namespace std;

int main(){
    // - [ ] Find the sum of digits of a given number
    /*
    
    123
    6

    1111
    4

    n = 123

    1) 123 % 10 = 3
    2) 123 / 10 = 12 % 10 = 2
    3) 12 / 10 = 1 % 10 = 1
    4) 1 / 10 = 0 -> stop
    */
    int n, sum = 0;
    cin >> n;


    for( ;n > 0; n /= 10){
        sum += n % 10;
    }


    cout << sum << endl;

    return 0;
}