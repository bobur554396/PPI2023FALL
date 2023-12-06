#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void show(int a){
    cout << a << " ";
}

int main(){
    // Built in functions in <algorithm> lib
    // fill, for_each

    vector<int> v(5);
    fill(v.begin(), v.end(), 3);
    for_each(v.begin(), v.end(), show);

    

    return 0;
}