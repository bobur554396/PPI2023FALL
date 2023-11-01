#include <iostream>

using namespace std;

int main(){
    // - [ ] Palindrome (yes, no)
    /*
    
        abba - yes
        abcba - yes
        abab - no

        a b c b a
        0 1 2 3 4

    */
    string word;
    cin >> word;

    for(int i = 0; i < word.size() / 2; i++){
        if(word[i] != word[word.size() - 1 - i]){
            cout << "no\n";
            return 0;
        }
    }

    cout << "yes\n";


    
    return 0;
}