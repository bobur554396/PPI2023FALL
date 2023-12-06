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
    // count_if
    vector<int> v;

    for(int i = 1; i <= 10; i++)
        v.push_back(i);

    int res = count_if(v.begin(), v.end(), isEven);
    cout << res << endl;

    int res2 = my_count_if(v.begin(), v.end());
    cout << res2 << endl;




    return 0;
}