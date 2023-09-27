#include <iostream>

using namespace std;

int main(){
    /*
        Your are given N and N integer numbers...
        Square of each element.

        Input:
        4
        3 5 1 2

        Output:
        9 25 1 4
    */

    // Read data from terminal
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    // Your logic to solve the problem
    for(int i = 0; i < n; i++){
        a[i] = a[i] * a[i];
    }    

    // Output part
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    

    return 0;
}