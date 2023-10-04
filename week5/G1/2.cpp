#include <iostream>

using namespace std;

int main(){
    // Read string from terminal
    string s1;
    // cin >> s1;
    getline(cin, s1);

    cout << s1.size() << endl;
    cout << s1 << endl;


    return 0;
}