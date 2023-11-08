#include <iostream>

using namespace std;

int main() {
    //  Built in functions
    // sort, reverse
    // tolower, toupper
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        // cout << (char) tolower(s[i]);
        cout << (char) toupper(s[i]);
    }
    cout << endl;

    return 0;
}
  