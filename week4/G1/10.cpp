#include <iostream>

using namespace std;

int main(){
    /*
    Your are given N and N integer numbers.
    Show even numbers from given array.

    Input:
    5
    4 2 1 0 7

    Output:
    4 2 0
    */

    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0)
            cout << a[i] << " ";
    }


    return 0;
}