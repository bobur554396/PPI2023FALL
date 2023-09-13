#include <iostream>

using namespace std;

int main(){
    /*
        increment / decrement the values of current variable
        post / pre
    */

    int a = 2;
    a++; // a = a + 1; -> post increment
    ++a; // a = a + 1; -> pre increment

    // int b = a++;
    int b = ++a;
    cout << a << " " << b << endl;
    




    return 0;
}