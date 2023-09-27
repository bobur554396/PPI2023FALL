#include <iostream>

using namespace std;

int main(){
    /*
        Your are given N and N integer numbers...
        Linear search of K from given array

        Input:
        4
        3 -6 1 -2
        1

        Output:
        YES
    */

    int n, k;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> k;

    for(int i = 0; i < n; i++){
        if(a[i] == k) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";

    return 0;
}