#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string line = "hello my name is KBTU";
    string target = "name";

    /*
    find will return:
        - if target exists => return the starting index of target
        - if it is not exists => -1 or string::npos
    */

    int found = line.find(target);
    if(found != -1){ // string::npos
        cout << "Target is found: " << found << endl;
    } else {
        cout << "Targe is not found\n";
    }

    
    

    return 0;
}