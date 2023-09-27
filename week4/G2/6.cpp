#include <iostream>

using namespace std;

int main(){
    /*
        Your are given N and N integer numbers...
        Square elements on odd positions.

        Input:
        4
        3 5 1 2
    <   0 1 2 3   >

        Output:
        3 25 1 4
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
        if(i % 2 == 1)
            a[i] = a[i] * a[i];
    }    

    // Output part
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    

    return 0;
}