#include <iostream>
#include <sstream>

using namespace std;

int main(){
    // he12llo11kbtu
    stringstream ss("100 hello 2.3");

    int a;
    string s;
    float b;

    ss >> a >> s >> b;

    cout << a + 2 << endl << s << endl << b * 2 << endl;

    
    
    

    
    return 0;
}