#include <iostream>

using namespace std;

int main(){
    // - [ ] count number of dividers of N

    /*
    10
    1 2 5 10
    4

    11
    1 11
    2


    13
    1 13
    2

    6
    1 2 3 6
    4


    3
    1 3
    2
    */
    int n, cnt = 0;
    cin >> n;

    for(int i = 1; i <= n; i++){
        if(n % i == 0)
            cnt++;
    }

    cout << cnt << endl;

    return 0;
}