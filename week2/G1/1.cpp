#include <iostream>

using namespace std;

int main(){
    /*
    1 byte => 8 bit -> 8 cells in memory

    2^8 = 256
    [][][][][][][][1] - 1 byte

    int - 4 byte
    float - 4 byte
    char - 1 byte    
    */

    cout << sizeof(int) << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(char) << endl;
    cout << sizeof(string) << endl;
    cout << sizeof(bool) << endl;

    return 0;
}