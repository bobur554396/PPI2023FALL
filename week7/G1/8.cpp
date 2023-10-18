#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    /* 
    Input:
    hel2lo13kbtu5hi

    Output:
    11
    */
    string s;
    cin >> s;
    
    /*
    Solution:
    
    1 sub problem: Try to identify digits from given string
    2 sub problem: Try to convert each digits from char to int
    3 sub problem: Calculate the sum;
    */

    int sum = 0;
    for(int i = 0; i < s.size(); i++){
        // if(int(s[i]) >= 48 && int(s[i]) <= 57)
        if(s[i] >= '0' && s[i] <= '9') {
            // cout << s[i] << " ";
            int n = int(s[i]) - int('0'); // convert char digit to integer value
            sum += n;
        }
    }

    cout << sum << endl;


    return 0;
}