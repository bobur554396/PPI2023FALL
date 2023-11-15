#include <iostream>

using namespace std;

int cnt = 0;
void show(){
    cout << ++cnt << " ";

    if(cnt == 10) // base case
        return;

    show(); // call itself
}
/*
Recursion - is the function which will call itself inside it. 
Stack overflow - error/exception
Rules:
1. Function must call itself inside it
2. Function must contain at least one BASE CASE.

BASE CASE - is the condition, when recursion function must be finished
*/

int main(){

    show(); // calling the function show

    return 0;
}