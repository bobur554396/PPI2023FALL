#include <iostream>

using namespace std;

int main(){
    /*
        + - * / %
        increment / decrement number values

        pre/post
        pre increment / post increment
    */
    int a = 2; // assign the initial value
    a++; // post increment -> a++; => a = a + 1;
    ++a; // pre increment -> ++a; => a = a + 1;

    // int b = a++;
    int b = ++a;

    int c = b-- + --a;

    cout << a << " " << b << " " << c << endl;



    return 0;
}