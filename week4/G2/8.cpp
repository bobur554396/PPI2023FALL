#include <iostream>

using namespace std;

int main(){
    /*
        Your are given N and N integer numbers...
        Find the sum of all numbers/

        Input:
        4
        3 6 1 2

        Output:
        12
    */

    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + a[i];
    }    
    cout << sum << endl;

    

    return 0;
}