#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    char c1 = '0';
    cout << (int)c1 << endl;

    char c2 = '9';
    cout << (int)c2 << endl;

    int n = int(c2) - int(c1); // 6 as an integer

    cout << n * 2 << endl;

    return 0;
}