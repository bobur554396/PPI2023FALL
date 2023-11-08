#include <iostream>

using namespace std;

void hello(){
    cout << "message from hello function\n";
    cout << "message from hello function\n";
    return;
    cout << "message from hello function\n";
    cout << "message from hello function\n";
}

void greeting(string _f_name, string _l_name){ 
    cout << "Hi " << _f_name << " " << _l_name << "!" << endl;
}

int sum(int a, int b) {
    return a + b;
}

int main() {
    int n, m;
    cin >> n >> m;

    int result = sum(n, m);

    cout << result << endl;
    
    return 0;
}
  