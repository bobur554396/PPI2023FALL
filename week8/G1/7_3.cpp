#include <iostream>

using namespace std;

int main(){
    // - [ ] Palindrome (yes, no)
    /*
    
        abba - yes
        abcba - yes
        abab - no

        abba
        abba

    */
    string word;
    cin >> word;

    string tmp = word;
    reverse(tmp.begin(), tmp.end());
    if(tmp == word)
        cout << "yes\n";
    else 
        cout << "no\n";

    
    return 0;
}