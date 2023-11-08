#include <iostream>

using namespace std;

void hello(){
    cout << "message from hello function\n";
    cout << "message from hello function\n";
    cout << "message from hello function\n";
    cout << "message from hello function\n";
}

void greeting(string _f_name, string _l_name){ 
    cout << "Hi " << _f_name << " " << _l_name << "!" << endl;
}

int main() {
    string f_name, l_name; // local variable
    cin >> f_name >> l_name;

    greeting(f_name, l_name); 

    return 0;
}
  