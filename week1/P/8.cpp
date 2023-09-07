#include <iostream>

using namespace std;

int main(){
    // Print out last digit of given integer number;
    /*
    123 % 100
    23

    4567 % 100
    67

    9857 % 100
    57
    */
    int n;
    cin >> n;

    int result = n % 10;

    cout << result << endl;


    return 0;
}