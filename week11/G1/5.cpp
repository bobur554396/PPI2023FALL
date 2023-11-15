#include <iostream>

using namespace std;

void show0(int a){
    for(int i = a; i > 0; i--)
        cout << i << " ";
}

/*
1) show(5) => cout << 5 << " ";
2) show(4) => cout << 4 << " ";
3) show(3) => cout << 3 << " ";
4) show(2) => cout << 2 << " ";
5) show(1) => cout << 1 << " ";
base case - stop/return the function
*/

void show(int a){
    cout << a << " ";

    if(a == 1) // base case
        return;

    show(a - 1); // calling itself
}

/*
Recursion - function which calls itself inside it.
Stack overflow
Base case - stopping condition of recursion function;
*/

int main(){
    int n;
    cin >> n;

    show0(n);
    cout << endl;
    show(n); // calling the function show.

    return 0;
}