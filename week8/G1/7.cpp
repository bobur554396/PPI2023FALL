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

    int cnt = 0;
    for(int i = 0; i < word.size() / 2; i++){
        // cout << i << " " << word.size() - 1 - i << endl;
        if(word[i] == word[word.size() - 1 - i]){
            cnt++;
        }
    }

    if(cnt == word.size() / 2)
        cout << "yes\n";
    else 
        cout << "no\n";

    
    return 0;
}