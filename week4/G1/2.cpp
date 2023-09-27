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

    // cout << a[0] << endl;
    // cout << a[1] << endl;
    // cout << a[2] << endl;
    // cout << a[3] << endl;

    cout << *(a + 0) << endl;
    cout << *(a + 1) << endl;
    cout << *(a + 2) << endl;
    cout << *(a + 3) << endl;
    

    return 0;
}