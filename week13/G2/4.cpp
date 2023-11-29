#include <iostream>
#include <map>
#include <stack>

using namespace std;

/*
Stack - LIFO: Last In First Out


1) add 3
2) add 5
3) add 2
4) get data

[]
[2]
[5]
[3]
*/

int main(){
    stack<int> s;
    s.push(3);
    s.push(5);
    s.push(2);

    // cout << s.empty() << endl;
    // cout << s.size() << endl;
    // cout << s.top() << endl;
    // s.pop();
    // cout << s.top() << endl;
    while(s.empty() == false) {
        cout << s.top() << " ";
        s.pop();
    }

    


    return 0;
}