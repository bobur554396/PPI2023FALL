#include <iostream>

using namespace std;

int main(){
    for(int i = 0; i < 4; i++){ // index of rows
        for(int j = 0; j < 4; j++) { // index of columns
            printf("i = %i, j = %i;  ", i, j);
        }
        cout << endl;
    }

    /*
    1D array:
    3
    1 2 3
    
    2D array:
    3 3
    1 2 3
    4 5 6
    7 8 9
    */

    return 0;
}