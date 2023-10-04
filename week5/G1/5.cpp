#include <iostream>

using namespace std;

int main(){
    // Count number of words.
    /*
    Input:
    hello my name is kbtu

    Output:
    5
    */
    string line;
    getline(cin, line);

    int cnt = 0;
    for(int i = 0; i < line.size(); i++){
        // if((int) line[i] == 32)
        if(line[i] == ' ') {
            cnt++;
        }
    }

    cout << cnt + 1 << endl;

    

    return 0;
}