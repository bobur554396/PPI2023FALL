#include <iostream>

using namespace std;

void show0(int a){
    for(int i = 1; i <= a; i++)
        cout << i << " ";
}

/*
1) show(4) => show(3);
2) show(3) => show(2);
3) show(2) => show(1);
4) show(1) => show(0);
5) show(0) => base case -> return the function

L
[cout << 1 << " ";]
[cout << 2 << " ";]
[cout << 3 << " ";]
[cout << 4 << " ";]
*/

void show(int a){
    if(a == 0) // base case
        return;

    show(a - 1); // calling itself

    cout << a << " ";
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