#include <iostream>

using namespace std;

int main(){
    // Convert letters register
    /*
    Input:
    HelLo

    Output:
    HELLO
    */
    string s1;
    cin >> s1;

    for(int i = 0; i < s1.size(); i++){
        int k = (int) s1[i];

        if (k >= 97 && k <= 122) {
            k = k - 32;
        }

        cout << (char) k;
    }

    cout << endl;



    return 0;
}