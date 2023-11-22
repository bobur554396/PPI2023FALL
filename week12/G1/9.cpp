#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    // [3][4][2][9][] <-
    vector<int> v; // dynamic size array
    v.push_back(3);
    v.push_back(4);
    v.push_back(2);
    v.push_back(9);

    v.insert(v.begin() + 1, 100);
    
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }



    return 0;
}