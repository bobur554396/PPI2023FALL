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

    s.clear();

    cout << s.empty() << endl;
    cout << s.size() == 0 << endl;

    cout << s.size() << endl;
    set<int>::iterator it = s.begin();

    while(it != s.end()){
        cout << *it << " ";
        it++;
    }

    return 0;
}