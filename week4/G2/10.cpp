#include <iostream>

using namespace std;

int main(){
    /*
        Your are given N and N integer numbers...
        Count number of positive elements.

        Input:
        4
        3 -6 1 -2

        Output:
        2
    */

    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > 0)
            cnt++;
    }

    cout << cnt << endl;


    
    
    

    return 0;
}