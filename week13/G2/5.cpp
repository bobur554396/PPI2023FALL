#include <iostream>
#include <map>
#include <stack>
#include <queue>

using namespace std;

/*
Queue - FIFO: Fist In First Out

1) add 3
2) add 5
3) add 2
4) get data

|R|   [3][5][2][][][]
*/

int main(){
    queue<int> q;
    q.push(3);
    q.push(5);
    q.push(2);

    // cout << q.empty() << endl;
    // cout << q.size() << endl;
    // cout << q.front() << " " << q.back() << endl;
    // q.pop();
    // cout << q.front() << " " << q.back() << endl;
    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }


    


    return 0;
}