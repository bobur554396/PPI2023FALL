#include <iostream>

using namespace std;

int main(){
    int a = 2;
    int b = ++a;
    // a = 3, b = 3; 

    int res = b++ + ++a;
    // cout << res << endl;   
    cout << a << " " << b << " " << res << endl;   
    




    return 0;
}