#include <iostream>

using namespace std;


int main(){
    // Initializing 2D array
    // data_type var_name[rows][cols]

    // int a[3][3];

    int a[3][3] = {
        {2, 3, 7},
        {5, 8, 1},
        {4, 2, 6}
    };

    // cout << a[2][2] << endl;
    a[2][2] = a[2][2] * 2;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}