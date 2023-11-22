#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main(){
    // Map - key/value container

    /*
    
    m
    K  V
    [a][10] - pair
    [b][12]
    [d][2]
    [c][6]
    [][]
    */

    map<char, int> m;
    m['d'] = 2;
    m['a'] = 10;
    m['b'] = 3;
    m['c'] = 2;
    m['b'] = 12;
    m.insert(pair<char, int>('f', 1));
    
    pair<char, int> p('g', 100);
    m.insert(p);


    cout << m.size() << endl;
    map<char, int>::iterator it = m.begin();
    while(it != m.end()){
        cout << it->first << " " << it->second << endl;
        it++;
    }

    return 0;
}