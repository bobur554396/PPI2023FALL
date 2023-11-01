#include <iostream>

using namespace std;

int main(){
    
    string line = "hello my name my is kbtu";
    string target = "my";

    int found = line.find(target, 7); // -1, string::npos

    // if(found == -1){
    if(found == string::npos){
        cout << "not found\n";
    } else {
        cout << "found at starting position: " << found << endl;
    }

    return 0;
}