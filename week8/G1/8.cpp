#include <iostream>

using namespace std;

int main(){
    string word = "hello";

    word.append(" kbtu");
    word.insert(2, "hi");

    word += "!";

    cout << word << endl;
    

    
    return 0;
}