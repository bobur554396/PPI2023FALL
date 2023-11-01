    
#include <iostream>

using namespace std;

int main(){

    string s = "hely name my is my my kbtu";

    s.erase(3);
    // s.erase(3, 4); // 3 - starting index, 4 - number of removed elements

    cout << s << endl;

    return 0;
}