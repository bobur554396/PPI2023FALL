#include <iostream>

using namespace std;

int main(){
    // data type: char

    char c = 'a';  // char - can store only one symbol; it takes 1 byte

    char c1 = 'k';
    char c2 = 'b';
    char c3 = 't';
    char c4 = 'u';

    cout << c1 << c2 << c3 << c4 << endl;

    string word = "kbtu";
    string word2 = "hello";

    string r = word2 + " " + word;

    cout << word.size() << endl;
    cout << r << endl;

    return 0;
}