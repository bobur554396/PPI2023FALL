#include <iostream>

using namespace std;

int main(){
    /*
    4
    8 2 3 7
    */

    // freopen("input.txt", "r", stdin); // r - read
    // freopen("output.txt", "w", stdout); // w - write

    // Read data from terminal
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    cout << "hello\n";


    // Out logic



    // Output
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    return 0;
}