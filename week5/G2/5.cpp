#include <iostream>

using namespace std;

int main(){
    // Convert all lower case letters to Upper.

    /*
    4
    3 2 4 5
    */

    freopen("input.txt", "r", stdin); // r - read
    freopen("output.txt", "w", stdout); // w - write

    // Reading part
    int n; 
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];


    // Our logic


    // Output part
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    
    cout << endl;

    
    return 0;
}