#include <iostream>

using namespace std;

void show(){
    cout << "hello from show\n";

    show(); // call itself

    cout << "end of the show function\n";
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