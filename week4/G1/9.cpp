#include <iostream>

using namespace std;

int main(){
    /*
    Your are given N and N integer numbers.
    Find the sum of all elements of given array.

    Input:
    5
    4 2 1 0 7

    Output:
    14
    */

    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i]; // sum = sum + a[i];
    }

    cout << sum << endl;


    return 0;
}