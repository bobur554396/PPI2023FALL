#include <iostream>

using namespace std;

int main() {
    //  Built in functions
    // isalpha, isdigit, isalnum, ispunct

    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        // cout << (bool(isalpha(s[i])) == true);
        // cout << isdigit(s[i]);
        cout << isalnum(s[i]);
    }
    cout << endl;

    return 0;
}
  