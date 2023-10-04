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
        if(s[i] >= '0' && s[i] <= '9') {
            cout << s[i] << " ";
        }
    }

    cout << endl;

    return 0;
}