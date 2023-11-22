#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    /*
        Input:
        4
        3 2 4 9
    */
    // Read data from cli
    int n, a;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        cin >> a;
        v.push_back(a);
    }

    // Solution
    sort(v.begin(), v.end());


    // Output
    vector<int>::iterator it;
    for(it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }

    return 0;
}