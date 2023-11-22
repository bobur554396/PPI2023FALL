#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    // STL - Standart Template Library
    /*
        1) vector - dynamic size array
        2) Iterators
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

    vector<int>::iterator it;
    for(it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }

    // int i;
    // for(i = 0; i < v.size(); i++){
    //     cout << v[i] << " ";
    // }


    return 0;
}