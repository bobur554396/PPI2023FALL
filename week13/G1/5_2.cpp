#include <iostream>
#include <map>
#include <stack>
#include <queue>

using namespace std;

/*

()() - YES
(((((()))))) - YES
()()() - YES
()) - NO
(() - NO
)()() - NO
*/


int main(){
    string s;
    cin >> s;
    int cnt = 0;
    
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '(') {
            cnt++;
        } else {
            cnt--;
            if(cnt < 0) {
                cout << "NO" << endl;
                return 0;
            }

        }
    }

    if(cnt == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
    // error for case: ())(


   

    return 0;
}