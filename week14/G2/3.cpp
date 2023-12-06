#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void show(int a){
    cout << a << " ";
}

int main(){
    // Built in functions in <algorithm> lib
    // unique

    /*
    f-  1 3 2 9 2 10

        1 1 3 3 2 9 2 10
        1 3 2 9 2 10 2 10
    */

    int a[8] = {1, 1, 3, 3, 2, 9, 2, 10};
    vector<int> v(a, a + 8);

    vector<int>::iterator unique_end = unique(v.begin(), v.end());
    vector<int>::iterator it = v.begin();

    while(it != unique_end){
        cout << *it << " ";
        it++;
    }

    

    

    return 0;
}