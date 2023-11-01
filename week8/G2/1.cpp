    
#include <iostream>

using namespace std;

int main(){

    string s = "hello my name my is kbtu";
    string t = "my";

    // -1 - if it didn't find andy <t>
    // string::npos - if it didn't find andy <t>
    // if <t> is found -> will be returned starting index in original string.
    int found = s.find(t);
    if(found == -1){
        cout << "not found\n";
    } else {
        cout << "found: " << found << endl;
    }


    return 0;
}