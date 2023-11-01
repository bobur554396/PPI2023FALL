    
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

    int cnt = 0;
    for(int i = 0; i < s.size() / 2; i++){
        // cout << i << " " << s.size() - 1 - i << endl;
        if(s[i] == s[s.size() - 1 - i]){
            cnt++;
        }
    }

    if(cnt == s.size() / 2)
        cout << "YES\n";
    else
        cout << "NO\n";


    return 0;
}