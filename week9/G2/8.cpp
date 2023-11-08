#include <iostream>

using namespace std;

int sum(int nnn, int m) {
    return nnn + m;
}

int square(int n) {
    return n * n;
}

int main(){
    int n, m;
    cin >> n >> m;
    
    cout << square(n) << endl;

    int res = sum(n, m);
    cout << res << endl;
    
    return 0;
}