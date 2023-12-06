#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


bool isEven(int a) {
    // return !(a % 2);
    if(a % 2 == 0)
        return true;
    return false;
}

int my_count_if(vector<int>::iterator begin, vector<int>::iterator end) {
    int cnt = 0;
    while(begin != end) {
        if(isEven(*begin))
            cnt++;
        
        begin++;
    }
    return cnt;
}


int main(){
    // Built in functions 
    // fill

    vector<int> v(5);
    int a[5];

    // fill(a, a + 10, 2);
    fill(v.begin(), v.end(), 2);

    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";


    return 0;
}