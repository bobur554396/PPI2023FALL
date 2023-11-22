#include <iostream>
#include <algorithm>
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

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }



    return 0;
}