#include <iostream>

using namespace std;

void show(){
    cout << "hello from show 1\n";
    cout << "hello from show 2\n";
    cout << "hello from show 3\n";
    return; // manually stop the function -"show"
    cout << "hello from show 4\n";
}

void show2(){
    cout << "message from show2 - 1\n";
    
    show();

    cout << "message from show2 - 2\n";
}

/*
L_SHOW
[]
[]
[]
[]

L_SHOW2
[]
[]
[]
[cout << "message from show2 - 2\n";]

L_MAIN
[]
[cout << "end of the main function1\n";]
[cout << "end of the main function2\n";]
[return 0;]

*/

int main(){

    show2();

    cout << "end of the main function1\n";
    cout << "end of the main function1\n";
    return 0;
}

/*
Stack - vertical box which can store data.
LIFO - last in first out

add - 3 
add - 2
add - 5

get/pop => 5
get/pop => 2

L - stack
[]
[]
[2]
[3]
*/