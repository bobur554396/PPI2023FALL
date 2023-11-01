#include <iostream>

using namespace std;

int main(){
    // - [ ] Palindrome (yes, no)
    /*
    
        abba - yes
        abcba - yes
        abab - no

        a b b a
          l r
    */
    string word;
    cin >> word;

    int left = 0;
    int right = word.size() - 1;

    while(left < right){
        if(word[left] != word[right]){
            cout << "no\n";
            return 0;
        }
        left++;
        right--;
    }
    cout << "yes\n";

    
    return 0;
}