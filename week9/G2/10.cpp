#include <iostream>

using namespace std;

int max(int a, int b) {
    if(a > b)
        return a;
    return b;
}

int min(int a, int b) {
    if(a < b)
        return a;
    return b;
}

int main(){
    int n, m; // local variables for "main" function
    cin >> n >> m;

    cout << max(n, m) << endl;
    cout << min(n, m) << endl;

    return 0;
}