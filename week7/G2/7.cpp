#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    // String - the list of chars.

    string s0 = "";
    string s1 = "kbtu";
    string s2("hello");
    string s3 = s1 + " " + s2;

    s3 += '!';

    cout << s3 << endl;
    cout << s1.size() << " " << s1.length() << endl;

    // cout << s3[0] << endl;
    for(int i = 0; i < s3.size(); i++){
        cout << s3[i] << " "; // s3[i] - char
    }
    


    return 0;
}