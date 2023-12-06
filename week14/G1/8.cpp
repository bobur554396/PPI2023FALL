#include <iostream>
#include <algorithm>
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
    }
}

bool sortByAge(Student s1, Student s2){
    if(s1.age == s2.age) {
        return s1.gpa > s2.gpa;
    }
    return s1.age > s2.age;

    // if(s1.age > s2.age)
    //     return true;
    // return false;
}


int main(){
    freopen("in.txt", "r", stdin);

    vector<Student> v;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        Student s;
        s.read();
        v.push_back(s);
    }

    sort(v.begin(), v.end(), sortByAge);

    show(v);


        

    return 0;
}