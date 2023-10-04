#include <iostream>

using namespace std;

int main(){
    // From given word, print out all digits.

    /*
    Input:
    h2el4lo

    Output:
    2 4
    */
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        int k = (int) s[i]; // ascii code of current char
        if(k >= 48 && k <= 57) {
            // cout << (char) k;
            cout << s[i] << " ";
        }
    }

    cout << endl;

    return 0;
}