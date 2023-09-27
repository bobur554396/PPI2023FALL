#include <iostream>

using namespace std;

int main(){
    /*
    Your are given N and N integer numbers....

    5
    4 2 1 0 7
    */

    // Read data from terminal
    int n;
    // int a[n]; // wrong
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    // your logic to solve the problem


    // Ouput changed array values
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }



    return 0;
}