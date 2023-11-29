#include <iostream>
#include <map>

using namespace std;

void showMapItems(map<string, float> m) {
    map<string, float>::iterator it = m.begin();
    while(it != m.end()) {
        // cout << it->first << "-->" << it->second << endl;
        // *it -- instance of the pair
        // cout << (*it).first << "-->" << (*it).second << endl;
        pair<string, float> p = *it;
        cout << p.first << "-->" << p.second << endl;

        it++;
    }
}

int main(){
    freopen("in.txt", "r", stdin);

    map<string, float> m;

    // map<string, map<string, vector<int> > > m2;
    
    // map<string, map<string, int> >::iterator it = m2.begin();
    // pair<string, map<string, int> > p0 = *it;
    // p0.first; // ID of the student
    // p0.second; // inner map
    /*
    23B001 
        math 2 
        pp1 3 
        pp2 10 
        hitory 11
    23B002
        ...
    ...
    */

    int n;
    string s;
    float a;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s >> a;
        m[s] = a;
    }

    cout << m.size() << endl;
    showMapItems(m);

    m["23B001"] = m["23B001"] * 2;
   
    m["23B005"] = 25; // 1 option to add new item
    pair<string, float> p1("23B006", 12); // 2 option to add new item
    m.insert(p1);

    pair<string, float> p2; // 3 option to add new item
    p2.first = "23B007";
    p2.second = 29;
    m.insert(p2);

    cout << endl;

    showMapItems(m);





    return 0;
}