#include <iostream>
#include <map>
#include <stack>
#include <queue>

using namespace std;

/*
Queue - FIFO - First In First Out


1) add 5
2) add 2
3) add 4
4) get item


|r|    [5][2][4][][]
*/


int main(){
    queue<int> q;
    q.push(5);
    q.push(2);
    q.push(4);

    // cout << q.empty() << endl;
    cout << q.size() << endl;

    // cout << q.front() << " " << q.back() << endl;
    // q.pop();
    // cout << q.front() << " " << q.back() << endl;

    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }



    return 0;
}