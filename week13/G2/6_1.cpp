#include <iostream>
#include <map>
#include <stack>
#include <queue>

using namespace std;

/*
() - YES
()() - YES
((())) - YES
(() - NO
((( - NO
)() - NO
*/

int main(){
    string s;
    cin >> s;
    int cnt = 0;
    if(s[0] == ')') {
        cout << "NO" << endl;
        return 0;
    }
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(') cnt++;
        if(s[i] == ')') cnt--;
    }

    if(cnt == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    // wrong answer for case: ())(
    

    


    return 0;
}