#include <iostream>

using namespace std;

int main(){
    // Show all digits from string
    /*
    Input:
    he2ll3o

    Output:
    2 3
    */

    string s1;
    cin >> s1;

    for(int i = 0; i < s1.length(); i++){
        if(s1[i] >= '0' && s1[i] <= '9') {
            cout << s1[i] << " ";
        }
    }



    return 0;
}