#include <iostream>

using namespace std;

void show(){
    cout << "message from show 1\n";
    cout << "message from show 2\n";
    cout << "message from show 3\n";
    return; // manually stop the function - "show"
    cout << "message from show 4\n";
}

int main(){
    cout << "Main function staring...\n";

    show();

    cout << "Main function finished\n";
    return 0;
}