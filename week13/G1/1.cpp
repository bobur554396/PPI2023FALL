#include <iostream>
#include <map>

using namespace std;

void showMapItems(map<string, float> m) {
    map<string, float>::iterator it = m.begin();
    while(it != m.end()) {
        cout << it->first << "-->" << it->second << endl;
        it++;
    }
}

int main(){
    freopen("in.txt", "r", stdin);

    map<string, float> m;
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