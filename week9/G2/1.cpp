#include <iostream>

using namespace std;

int main(){
    // built-in function
    // sort, reverse
    // tolower, toupper
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
    //    cout << (char) tolower(s[i]); 
       cout << (char) toupper(s[i]); 
    }    




    return 0;
}