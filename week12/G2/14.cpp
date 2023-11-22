#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main(){
    map<string, int> m;
    m["23B010"] = 3;
    m["23B011"] = 10;
    m["23B012"] = 2;
    m["23B013"] = 15;
    m["23B014"] = 7;

    map<string, int>::iterator it = m.begin();
    pair<string, int> winner(it->first, it->second);
    while(it != m.end()) {
        if(it->second > winner.second) {
            winner.first = it->first;
            winner.second = it->second;
        }
        it++;
    }

    cout << winner.first << " " << winner.second << endl;

    

    return 0;
}