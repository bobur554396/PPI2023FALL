#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Student {
    string id; 
    string name;
    int age;
    float gpa;

    void read() {
        cin >> id >> name >> age >> gpa;
    }

    void show() {
        cout << id << " " << name << " " << age << " " << gpa << endl;
    }

};

int main(){
    freopen("in.txt", "r", stdin);
    
    int n; 
    cin >> n;
    vector<Student> v;

    for(int i = 0; i < n; i++){
        Student s;
        s.read();
        v.push_back(s);
    }

    for(int i = 0; i < n; i++){
        v[i].show();
    }


    return 0;
}