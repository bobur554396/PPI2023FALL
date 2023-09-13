#include <iostream>

using namespace std;

int main(){
    /*
        1 byte - 8 bit/cell 
        [0][0][0][0][0][0][0][0] = 0
        [0][0][0][0][0][0][0][1] = 1 * 2^0 +... = 1
        [0][0][0][0][0][0][1][0] = 0 * 2^0 + 1 * 2^1 = 2
        [0][0][0][0][0][0][1][1] = 3
        [0][0][0][0][0][1][1][1] = 7
        [0][0][0][0][0][1][0][0] = 4

        bool
        [0][0][0][0][0][0][0][0] = false
        [0][0][0][0][0][0][0][1] = true

        int - 4 byte -> 32 bit/cell
    */
    // int a = 2;

    cout << sizeof(int) << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(char) << endl;
    cout << sizeof(string) << endl;
    cout << sizeof(bool) << endl;



    return 0;
}