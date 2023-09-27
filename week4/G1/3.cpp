#include <iostream>

using namespace std;

int main(){
    /*
        Container: Array

        Array - several the same data type values; 

        data_type name_var[number_of_elements]; 
        
        int a[4] = {3, 2, 5, -1};


        addersses:  =>  0x.. 0x.. 0x.. 0x..
        values      =>  [3]  [2]  [5]  [-1]
        indexes     =>   0    1    2    3

    */  
    // int a[4];
    // int a[4] = {3, 2, 5}; - ok
    // int a[4] = {3, 2, 5, -1, 5}; wrong

    int a[4] = {3, 2, 5, -1};

    a[1] = a[2] + 4; // reassign the value of array element
    a[3] = a[3] * 10;

    for(int i = 0; i < 4; i++){
        cout << a[i] << " ";
    }

    cout << endl;
    

    return 0;
}