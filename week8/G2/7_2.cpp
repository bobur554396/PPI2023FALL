    
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


        a b b a
        0 1 2 3

        0 == 3
        1 == 2
    */
    string s;
    cin >> s;

    for(int i = 0; i < s.size() / 2; i++){
        if(s[i] != s[s.size() - 1 - i]){
            cout << "NO\n";
            return 0;
        }
    }
    
    cout << "YES\n";


    return 0;
}