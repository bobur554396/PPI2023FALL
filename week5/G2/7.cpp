#include <iostream>

using namespace std;

int main(){
    // Nested loops
    for(int i = 0; i < 3; i++){ // index of rows
        for(int j = 0; j < 3; j++){ // index of columns
            // cout << "i = " << i << ", j = " << j << ";   ";
            printf("i = %i, j = %i;  ", i, j);
        }
        cout << endl;
    }

    /*
    1D array
    3
    5 2 4

    2D array

    3 3
    2 3 4
    3 4 5
    6 3 8

    a[1][2] // 5

    00 01 02
    10 11 12
    20 21 22
    
    */

    return 0;
}