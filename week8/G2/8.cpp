    
#include <iostream>

using namespace std;

int main(){
    string s = "hello";

    s.append(" kbtu");
    s.insert(2, "hi");

    s += "!";

    cout << s << endl;

    return 0;
}