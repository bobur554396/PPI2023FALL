#include <iostream>

using namespace std;

int main(){
    /*
    Your are given N and N integer numbers.
    Find the maximum from given array

    Input:
    5
    -49999 -29999 -59999 -99999 -79999

    Output:
    9
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