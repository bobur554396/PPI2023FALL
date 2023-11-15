#include <iostream>

using namespace std;

void show(){
    cout << "hello from show 1\n";
    cout << "hello from show 2\n";
    cout << "hello from show 3\n";
    return; // manually stop the function -"show"
    cout << "hello from show 4\n";
}

int main(){

    show();

    cout << "end of the main function\n";
    return 0;
}