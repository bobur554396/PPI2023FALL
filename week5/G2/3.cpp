#include <iostream>

using namespace std;

int main(){
    // Count number of words from give line.

    /*
    Input:
    hello my name is KBTU

    Output:
    5
    */
    string s;
    // cin >> s;
    getline(cin, s);

    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        // if((int) s[i] == 32) {
        if(s[i] == ' ') { // char == string
            cnt++;
        }
    }

    cout << cnt + 1 << endl;


    return 0;
}