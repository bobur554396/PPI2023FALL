#include <iostream>
#include <map>

using namespace std;

void showMapContent(map<string, float> m) {
    map<string, float>::iterator it = m.begin();
    while(it != m.end()) {
        // cout << it->first << " -->  " << it->second << endl;
        // cout << (*it).first << " -->  " << (*it).second << endl;
        pair<string, float> p = (*it);
        cout << p.first << " -->  " << p.second << endl;

        it++;
    }

    cout << endl;
}

int main(){
    
    freopen("in.txt", "r", stdin);

    map<string, float> m;
    int n;
    cin >> n;

    string id;
    float point;
    for(int i = 0; i < n; i++){
        cin >> id >> point;
        m[id] = point;
    }

    cout << m.size() << endl;
    showMapContent(m);

    m["23B001"] = m["23B001"] * 2;

    // 1 option to add a new item to the map
    m["23B005"] = 59; 

    // 2 option to add a new item to the map
    pair<string, float> p1("23B006", 12.4);
    m.insert(p1);

    // 3 option to add a new item to the map
    pair<string, float> p2;
    p2.first = "23B007";
    p2.second = 23;
    m.insert(p2);    


    showMapContent(m);


    return 0;
}