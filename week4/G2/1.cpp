#include <iostream>

using namespace std;

int main(){
    /*
        Array / Container

        Array is - several value of same data type.

        data_type var_name[number_of_elements];

        int a[4] = {3, 4, -5, 1};

        address:    0x.. 0x.. 0x..  0x..
        value:      [3]  [4]  [-5]  [1]
        index:       0    1    2     3

    */

    // int a = 2;

    // int a[4];
    int a[4] = {3, 4, -5, 1};

    cout << a[0] << endl;
    cout << a[1] << endl;
    cout << a[2] << endl;
    cout << a[3] << endl;


    return 0;
}