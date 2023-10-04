#include <iostream>

using namespace std;

int main(){
    // String
    string word = "hello";
    cout << word.size() << " " << word.length() << endl;
    cout << word[0] << endl;
    cout << word[word.size() - 1] << endl;

    for(int i = 0; i < word.size(); i++){
        cout << word[i] << " ";
    }



    return 0;
}