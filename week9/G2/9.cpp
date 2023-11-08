#include <iostream>

using namespace std;

int res; // Global variables

int sum(int a, int b) {
    int result = a + b; // local variable for "sum" function
    res = result;
    return result;
}

void hi(){
    res = 10;
}

int main(){
    int n, m; // local variables for "main" function
    cin >> n >> m;

    cout << sum(n, m) << endl;
    hi();
    cout << res << endl;
    
    return 0;
}