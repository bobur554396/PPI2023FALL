#include <iostream>

using namespace std;

int main(){
    
    string line = "hello my name my is my my kbtu";
    //                   678     14             
    string target = "my";

    int cnt = 0;
    int found = line.find(target);
    while(found != -1){ // string::npos
        cnt++;
        found = line.find(target, found + target.size());
    }

    cout << cnt << endl;



    return 0;
}