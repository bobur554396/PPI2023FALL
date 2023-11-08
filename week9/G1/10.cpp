#include <iostream>

using namespace std;

int res; // Global variables

int sum(int a, int b) {
    int result = a + b; // local variable
    res = result;
    return result;
}

void hello(){
    res = 10;
}

int main() {
    int n, m;
    cin >> n >> m;

    int result = sum(n, m); // local variable
    
    hello();

    cout << result << endl;
    cout << res << endl;
    
    return 0;
}
  