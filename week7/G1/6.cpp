#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    // String - the list of chars.
    string s1 = "kbtu";
    string s2("hello");

    // cout << (s1 == s2) << endl;
    string s3;
    s3 = "hi ";

    string s4 = s1 + " " + s2;
    s3 += s4;

    cout << s3 << endl;
    cout << s3.size() << " " << s3.length() << endl;

    // cout << s3[0] << endl;
    for(int i = 0; i < s3.size(); i++){
        cout << s3[i] << " "; // char
    }

    return 0;
}