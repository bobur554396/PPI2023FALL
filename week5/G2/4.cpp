#include <iostream>

using namespace std;

int main(){
    // Convert all lower case letters to Upper.

    /*
    Input:
    hello

    Output:
    HELLO

    Solution:
    a (97) - A (65) = 32
    h - 104 => 104 - 32 = 72
    H - 72

    e - 101 => 101 - 32 = 69
    E - 69
    */
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        int k = (int) s[i];
        k = k - 32;
        cout << (char)k;
    }
    cout << endl;
    
    return 0;
}