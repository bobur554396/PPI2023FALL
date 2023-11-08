#include <iostream>

using namespace std;

int main(){
    // built-in function
    // sqrt, min, max, pow, abs ...
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
    //    cout << (bool) isalpha(s[i]) ; 
    //    cout << (bool) isdigit(s[i]) ; 
    //    cout << (bool) isalnum(s[i]) ; 
       cout << (bool) ispunct(s[i]) ; 
    }    




    return 0;
}