#include <iostream>

using namespace std;

int main(){
    /*
    Your are given N and N integer numbers.
    Linear search of K from given array.

    Input:
    4
    1 -2 3 9
    3

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

    bool exists = false;
    for(int i = 0; i < n; i++){
        if(a[i] == k){
            exists = true;
            cout << "YES\n";
            break;
        }
    }
    if(exists == false) // !exists
        cout << "NO\n";




    return 0;
}