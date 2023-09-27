#include <iostream>

using namespace std;

int main(){
    /*
        Your are given N and N integer numbers...
        Find the maximum from list.

        Input:
        4
        -3 -6 -1 -2

        Output:
        -1
    */

    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int maxi = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] > maxi){
            maxi = a[i];
        }
    }

    cout << maxi << endl;


    
    
    

    return 0;
}