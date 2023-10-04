#include <iostream>

using namespace std;

int main(){
    // Convert letters register
    /*
    Input:
    hello

    Output:
    HELLO

    Solution: 
    32 = a - A = 97 - 65 = 32

    h - 104 => 104 - 32 = 72
    H - 72

    e - 101 => 101 - 32 = 69
    E - 69
    */
    string s1;
    cin >> s1;

    for(int i = 0; i < s1.size(); i++){
        int k = (int) s1[i] - 32;
        cout << (char) k;
    }

    cout << endl;



    return 0;
}