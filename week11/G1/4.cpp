#include <iostream>

using namespace std;

void show0(int a){
    for(int i = 1; i <= a; i++)
        cout << i << " ";
}

int cnt = 0;
void show(int a){
    cout << ++cnt << " ";

    if(cnt == a) // base case
        return;

    show(a); // calling itself
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