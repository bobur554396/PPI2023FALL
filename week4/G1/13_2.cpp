#include <iostream>

using namespace std;

int main(){
    /*
    Your are given N and N integer numbers.
    Find the maximum from given array

    Input:
    5
    -4 -2 -5 -9 -7

    Output:
    -2
    */

    int n, maxi;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(i == 0){
            maxi = a[i];
        } else {
            if(a[i] > maxi){
                maxi = a[i];
            }
        }
    }

    cout << maxi << endl;




    return 0;
}