#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    /*
    In:
    he21llo3kb4tu

    Out:
    2 + 1 + 3 + 4 = 10
    
    Solution:
    1 sub problem: Try to identify each digit from string
    2 sub problem: Try to convert digit symbol to integer
    3 sub problem: Calculate the sum
    */
    string s;
    cin >> s;

    int sum = 0;
    for(int i = 0; i < s.size(); i++){
        // int k = (int)s[i];
        // if(k >= 48 && k <= 57)
        if(s[i] >= '0' && s[i] <= '9'){
            // cout << s[i] << " ";
            int k = (int)s[i] - (int)'0';
            sum += k;
        }
    }
    cout << sum << endl;
    


    return 0;
}