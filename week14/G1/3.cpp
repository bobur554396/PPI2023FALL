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
    // unique
    /*
        1 1 1 2 1 4 4 5
        1 2 1 4 5 ? ? ?
    */

    int a[] = {1, 1, 1, 2, 1, 4, 4, 5};
    vector<int> v(a, a + 8);

    vector<int>::iterator result = unique(v.begin(), v.end());
    vector<int>::iterator it = v.begin();
    while(it != result){
        cout << *it << " ";
        it++;
    }

    return 0;
}