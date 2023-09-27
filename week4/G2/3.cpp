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
    int a[4] = {3, 4, -5, 1};

    a[0] = a[1] + a[2];
    a[1] = a[1 + 2] * 7;

    for(int i = 0; i < 4; i++){
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}