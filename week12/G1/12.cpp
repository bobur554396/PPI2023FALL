#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main(){
    // Set - unique value array
    set<int> s;
    s.insert(2);
    s.insert(3);
    s.insert(10);
    s.insert(4);
    s.insert(10);

    cout << s.size() << endl;
    set<int>::reverse_iterator it = s.rbegin();
    while(it != s.rend()){
        cout << *it << " ";
        it++;
    }

    return 0;
}