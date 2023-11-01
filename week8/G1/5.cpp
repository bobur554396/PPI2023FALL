#include <iostream>

using namespace std;

int main(){
    
    string line = "hello my name my is my my kbtu";

    // line.erase(3);
    // line.erase(3, line.size() - 3);
    line.erase(3, 4); // 3 - startin index, 4 - number of removing elements

    cout << line << endl;

    return 0;
}