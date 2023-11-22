#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main(){
    // Map - key/value storage

    /*
    m
    K V
    [a][1] - pair
    [b][12]
    [c][4]
    [][]
    [][]
    [][]
    */

    map<char, int> m;
    m['d'] = 3;
    m['a'] = 1;
    m['c'] = 10;
    m['c'] = 4;
    m['b'] = 1;

    cout << m.size() << endl;
    map<char, int>::iterator it = m.begin();
    while(it != m.end()){
        cout << it->first << " " << it->second << endl;
        it++;
    }
    
    return 0;
}