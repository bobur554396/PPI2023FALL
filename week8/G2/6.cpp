    
#include <iostream>

using namespace std;

int main(){

    string s = "dcab";

    sort(s.begin(), s.end());
    reverse(s.begin(), s.end());


    cout << s << endl;


    return 0;
}