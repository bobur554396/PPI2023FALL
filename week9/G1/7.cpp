#include <iostream>

using namespace std;

void hello(){
    cout << "message from hello function\n";
    cout << "message from hello function\n";
    cout << "message from hello function\n";
    cout << "message from hello function\n";
}

void greeting(string s){ // s - argument of string data type
    // <s> - local variable in <greeting> function
    // string s = "kbtu";
    cout << "Hi " << s << endl;

    hello();
}

int main() {
    string name; // local variable
    cin >> name;

    greeting(name); // "kbtu"

    return 0;
}
  