    
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

          l r
    */
    string s;
    cin >> s;

    int left = 0;
    int right = s.size() - 1;
    
    while(left < right) {
        if(s[left] != s[right]){
            cout << "NO\n";
            return 0;
        }
        left++;
        right--;
    }
    cout << "YES\n";


    return 0;
}