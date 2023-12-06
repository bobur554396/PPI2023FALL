#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool isOdd(int a) {
    if (a % 2 == 1)
        return true;
    return false;
}

int my_count_if(vector<int>::iterator begin, vector<int>::iterator end) {
    int cnt = 0;
    while(begin != end) {
        if(isOdd(*begin))
            cnt++;
        begin++;
    }
    return cnt;
}

int main(){
    // Built in functions in <algorithm> lib
    // count_if

    int a[5] = {3, 5, 2, 9, 10};
    vector<int> v(a, a + 5);

    // int res = count_if(v.begin(), v.end(), isOdd);
    // cout << res << endl;

    int res2 = my_count_if(v.begin(), v.end());
    cout << res2 << endl;


    return 0;
}