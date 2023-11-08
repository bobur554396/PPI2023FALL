#include <iostream>

using namespace std;

void hello() {
    cout << "message from hello function\n";
    cout << "message from hello function\n";
    cout << "message from hello function\n";
}

void greeting(string s){ // s - local variable
    // string s = "kbtu";
    cout << "Hello " << s << endl;
}

int main(){
    cout << "Enter your name...\n";
    string name; // local variable
    cin >> name; // name = "kbtu"

    greeting(name); // "kbtu"

    return 0;
}