#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    string s = "hello";

    cout << s[0] << " " << s[s.size() - 1] << endl;
    cout << s.front() << " " << s.back() << endl;
    cout << *s.begin() << " " << *(s.end() - 1) << endl;

    sort(s.begin(), s.end());

    cout << s << endl;

    return 0;
}