#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(3);
    v.push_back(7);
    v.push_back(2);
    v.push_back(8);

    v.insert(v.begin() + 1, 111);
    v.insert(v.end() - 1, 100);


    // Output
    vector<int>::iterator it;
    for(it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }

    return 0;
}