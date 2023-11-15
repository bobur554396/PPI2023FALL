#include <iostream>

using namespace std;

void first(int n){
    for(int i = 1; i <= n; i++)
        cout << i << " ";
}
/*
1) second(3) => second(2);
2) second(2) => second(1);
3) second(1) => second(0);
4) second(0) => base case


[]
[]
[cout << 1 << " ";]
[cout << 2 << " ";]
[cout << 3 << " ";]
*/

void second(int n){ // 3
    if(n == 0) // base case
        return;

    second(n - 1); // call itself

    cout << n << " ";
}

int main(){

    int n;
    cin >> n;

    first(n);
    cout << endl;
    second(n);

    return 0;
}