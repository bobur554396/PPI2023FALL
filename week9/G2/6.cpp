#include <iostream>

using namespace std;

void hello() {
    cout << "message from hello function\n";
    cout << "message from hello function\n";
    cout << "message from hello function\n";
}

void greeting(string f_name, string l_name){
    cout << "Hello " << f_name << " " << l_name << "!" << endl;
}

int main(){
    cout << "Enter your name...\n";
    string f_name, l_name; // local variable
    cin >> f_name >> l_name;

    greeting(f_name, l_name); 

    return 0;
}