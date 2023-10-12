#include <iostream>

using namespace std;

int main(){
    // 2D arrays

    // data_type var_name[row][col];

    // int a[3][3];

    int a[3][3] = {
        {2, 3, 7}, // 0 - row
        {6, 1, 9}, // 1 - row
        {3, 8, 4}  // 2 - row
    };

    a[2][1] = a[0][0] + a[0][2];
    // cout << a[2][1] << endl;
    /*
    
    00 01 02
    10 11 12
    20 21 22
    */
    for(int i = 0; i < 3; i++){ // index of rows
        for(int j = 0; j < 3; j++) { // index of columns
            cout << a[i][j] << " ";
        }
        cout << endl;
    }





    return 0;
}