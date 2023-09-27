#include <iostream>

using namespace std;

int main(){
    /*
    Your are given N and N integer numbers.
    Show the number on even positions.

    Input:
    5
    4 2 1 0 7
  < 0 1 2 3 4 >

    Output:
    4 1 7
    */

    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        if(i % 2 == 0)
            cout << a[i] << " ";
    }


    return 0;
}