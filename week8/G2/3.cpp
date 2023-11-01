    
#include <iostream>

using namespace std;

int main(){

    string s = "hello my name my is my my kbtu";
    
    // string t = s.substr(3);
    // string t = s.substr(3, s.size() - 1);
    string t = s.substr(3, 6);

    cout << s << endl << t << endl;

    return 0;
}