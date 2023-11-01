    
#include <iostream>

using namespace std;

int main(){
    /*
    - [ ] Palindrome (yes, no)

        aba - yes
        abba - yes
        abqba - yes
        abb - no
        bba - no


        s = "abba"
        t = s;// "abba"
        reverse(t);
        "abba" == "abba"


        s = "abb"
        t = "abb"
        reverse(t) = "bba"

        "abb" != "bba"

    */
    string s;
    cin >> s;

    string t = s;
    reverse(t.begin(), t.end());

    if(s == t)
        cout << "YES\n";
    else 
        cout << "NO\n";

    return 0;
}