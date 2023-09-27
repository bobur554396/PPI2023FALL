#include <iostream>

using namespace std;

int main(){
    /*
        Your are given N and N integer numbers...
        Show positions of even elements.

        Input:
        4
        3 6 1 2
    <   0 1 2 3   >

        Output:
        1 3
    */

    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0)
            cout << i << " ";
    }    

    

    return 0;
}