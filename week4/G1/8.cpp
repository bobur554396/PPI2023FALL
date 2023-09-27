#include <iostream>

using namespace std;

int main(){
    /*
    Your are given N and N integer numbers....

    Input:
    5
    4 2 1 0 7

    Output:
    16 4 1 0 49
    */

    // Read data from terminal
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    // your logic to solve the problem
    for(int i = 0; i < n; i++){
        a[i] *= a[i]; // a[i] = a[i] * a[i];
    }
    


    // Ouput changed array values
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }


    return 0;
}