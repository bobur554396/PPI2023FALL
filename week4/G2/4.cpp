#include <iostream>

using namespace std;

int main(){
    /*
        Your are given N and N integer numbers...

        Input:
        4
        3 5 1 2
    */

    // Read data from terminal
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    // Your logic to solve the problem


    // Output part
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    

    return 0;
}