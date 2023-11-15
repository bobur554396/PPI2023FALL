#include <iostream>

using namespace std;

/*
STACK_SHOW
[]
[]
[]

STACK_SHOW2
[]
[]
[cout << "message from show2 - 2\n";]

STACK_MAIN
[]
[]
[cout << "Main function finished\n";]
*/

void show(){
    cout << "message from show 1\n";
    cout << "message from show 2\n";
    cout << "message from show 3\n";
    return; // manually stop the function - "show"
    cout << "message from show 4\n";
    cout << "message from show 4\n";
    cout << "message from show 4\n";
}

void show2(){
    cout << "message from show2 - 1\n";
    
    show();
    
    cout << "message from show2 - 2\n";
}

int main(){
    cout << "Main function staring...\n";

    show2();

    cout << "Main function finished\n";
    return 0;
}

/*
Stack - vertical box which can store data
LIFO - last in first out

add 4
add 2
add 3

get/pop/read - 3
get/pop/read - 2

[]
[]
[]
[]
[4]


*/