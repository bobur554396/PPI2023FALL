#include <iostream>

using namespace std;

int main(){
    // You are give one integer number, 
    // you have to find the last digit of given number

    /*
    12
    1

    234 % 100
    34

    48 % 10
    8
    */
    int n;
    cin >> n;

    cout << n % 10 << endl;


    return 0;
}