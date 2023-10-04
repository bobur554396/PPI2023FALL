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
        int k = (int) s1[i];
        if(k >= 48 && k <= 57) {
            cout << s1[i] << " ";
        }
        // cout << s1[i] << " "; // s1[i] -> char
    }



    return 0;
}