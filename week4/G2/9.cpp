#include <iostream>

using namespace std;

int main(){
    /*
        Your are given N and N integer numbers...
        Find the sum of all numbers/

        Input:
        3 6 1 2

        Output:
        12
    */

    int n, sum = 0;
    while(cin >> n){
        sum += n; // sum = sum + n;
    }
    cout << sum << endl;

    

    return 0;
}