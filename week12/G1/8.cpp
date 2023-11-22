#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    /*
        Input:
        2 7 3 45 5 0

        Output:
        45 7 5 3 2
    */
    vector<int> v;
    int n;
    while(true) {
        cin >> n;
        if(n == 0)
            break;
        v.push_back(n);
    }

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());


    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }



    return 0;
}