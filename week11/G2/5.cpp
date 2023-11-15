#include <iostream>

using namespace std;

void first(int n){
    for(int i = n; i > 0; i--)
        cout << i << " ";
}
/*
1) second(4) => cout << 4; second(3);
2) second(3) => cout << 3; second(2);
3) second(2) => cout << 2; second(1);
4) second(1) => cout << 1; second(0);
5) second(0) => cout << 0; base case
*/

void second(int n){ // 4
    cout << n << " ";

    if(n == 1) // base case
        return;

    second(n - 1); // call itself
}

int main(){

    int n;
    cin >> n;

    first(n);
    cout << endl;
    second(n);

    return 0;
}