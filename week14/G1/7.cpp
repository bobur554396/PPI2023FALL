#include <iostream>
#include <vector>

using namespace std;

struct Student {
    string id; // property
    string name; // field
    int age; // struct data
    float gpa;

    void show() {
        cout << id << " " << name << " " << age  << " " << gpa << endl; 
    }

    void read() {
        cin >> id >> name >> age >> gpa;
    }
    
};

void show(vector<Student> v) {
    for(int i = 0; i < v.size(); i++) {
        v[i].show();
        // cout << v[i].id << " " << v[i].name << " " << v[i].age << " " << v[i].gpa << endl;
    }
}


int main(){
    freopen("in.txt", "r", stdin);

    vector<Student> v;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        Student s;
        s.read();
        // cin >> s.id >> s.name >> s.age >> s.gpa;
        v.push_back(s);
    }

    show(v);



        

    return 0;
}