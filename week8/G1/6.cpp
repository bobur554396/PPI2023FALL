#include <iostream>

using namespace std;

int main(){
    
    string line = "bdac";

    // line[0] - b
    // line.front() - b
    sort(line.begin() + 1, line.end());
    // reverse(line.begin(), line.end());

    cout << line << endl;

    
    return 0;
}