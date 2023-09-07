#include <iostream>

using namespace std;

int main(){
    // Print out last digit of given integer number;
    /*
    123 % 10
    3

    45 % 10
    5

    78 % 10
    8
    */
    int n;
    cin >> n;

    int result = n % 10;

    cout << result << endl;


    return 0;
}