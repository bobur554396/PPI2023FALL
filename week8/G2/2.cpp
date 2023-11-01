    
#include <iostream>

using namespace std;

int main(){

    string s = "hello my name my is my my kbtu";
    //                6       14  
    string t = "my";

    int cnt = 0;
    int found = s.find(t);
    while(found != string::npos) { // found != -1
        cnt++;
        found = s.find(t, found + t.size());
    }
    cout << cnt << endl;


    return 0;
}