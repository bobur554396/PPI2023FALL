#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    /*
        Input:
        4
        3 5 2 9


    */

    // Read input
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
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

   



    return 0;
}