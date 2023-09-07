#include <iostream>

using namespace std;

int main(){
    // char, string

    char c = 'a'; // can store only one symbol - 1 byte
    
    char c1 = 'h';
    char c2 = 'e';
    char c3 = 'l';
    char c4 = 'l';
    char c5 = 'o';

    cout << c1 << c2 << c3 << c4 << c5 << endl;

    string word = "hello";
    string word2 = "kbtu";

    string phrase = word + " " + word2;

    cout << phrase << endl;

    return 0;
}