#include <iostream>
#include <vector>

using namespace std;

int main(){
    // STL - Standart Template Library
    /*
        vector - simple array with dynamic size
    */
    int a[4] = {3, 4, 2, 9}; // static size array
    // a[6] = 7; - error

    // [3][4][2][9][] <-
    vector<int> v; // dynamic size array
    v.push_back(3);
    v.push_back(4);
    v.push_back(2);
    v.push_back(9);

    cout << *v.begin() << " " << *(v.end() - 1) << endl;
    cout << v[0] << " " << v[v.size() - 1] << endl;




    return 0;
}