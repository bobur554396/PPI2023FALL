#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    /*
        Input:
        23 4 18 9 0

        Output:
        23 18 9 4
    */
    // Read data from cli
    int a;
    vector<int> v;
    while(true) {
        cin >> a;
        if (a == 0)
            break;
        v.push_back(a);
    }

    // Solution
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());


    // Output
    vector<int>::iterator it;
    for(it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }

    return 0;
}