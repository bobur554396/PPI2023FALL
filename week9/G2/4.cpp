#include <iostream>

using namespace std;

void hello() {
    cout << "message from hello function\n";
    cout << "message from hello function\n";
    cout << "message from hello function\n";
    cout << "message from hello function\n";
    cout << "message from hello function\n";
}

int main(){
    cout << "Main function starting...\n";

    hello(); // function calling

    cout << "Main function finished...\n";
    return 0;
}