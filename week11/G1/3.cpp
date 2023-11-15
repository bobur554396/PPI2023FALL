#include <iostream>

using namespace std;

void show(){
    cout << "hello from show\n";

    show(); // calling itself

    cout << "hello\n";
}

/*
Recursion - function which calls itself inside it.

Stack overflow

Base case - stopping condition of recursion function;

*/

int main(){

    show(); // calling the function show.

    return 0;
}