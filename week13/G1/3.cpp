#include <iostream>
#include <map>
#include <stack>

using namespace std;

/*
Stack - vertical box with rule LIFO
Last In First Out

1) add 5
2) add 2
3) add 4
4) get item


[]
[4]
[2]
[5]
*/


int main(){
    stack<int> s;
    s.push(5);
    s.push(2);
    s.push(4);

    // cout << s.empty() << endl;
    cout << s.size() << endl;
    // cout << s.top() << endl;
    // s.pop();
    // s.pop();
    // cout << s.top() << endl;
    while(s.empty() == false) {
        cout << s.top() << " ";
        s.pop();
    }


    return 0;
}