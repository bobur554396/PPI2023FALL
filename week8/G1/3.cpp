#include <iostream>

using namespace std;

int main(){
    
    string line = "hello my name my is my my kbtu";

    // string line2 = line.substr(3);
    string line2 = line.substr(3, 6);

    cout << line << endl << line2 << endl;


    return 0;
}