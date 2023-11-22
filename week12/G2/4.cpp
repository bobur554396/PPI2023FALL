#include <iostream>
#include <vector>

using namespace std;

int main(){
    // STL - Standart Template Library
    /*
        1) vector - dynamic size array
    */
    int a[4] = {4, 2, 3, 5}; // static size container
    // cout << a[6]; // error

    // [5][3][7][2][] <-
    vector<int> v;
    v.push_back(5);
    v.push_back(3);
    v.push_back(7);
    v.push_back(2);
    v.push_back(8);

    cout << *v.begin() << endl;
    cout << *(v.end() - 1) << endl;


    return 0;
}