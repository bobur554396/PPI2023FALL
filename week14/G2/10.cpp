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

void showStudents(vector<Student> v) {
    for(int i = 0; i < v.size(); i++){
        v[i].show();
    }
}

// Comparator
bool sortByAge(Student s1, Student s2){
    return s1.age > s2.age;
    // if(s1.age > s2.age)
    //     return true;
    // return false;
}

bool sortByAgeGPA(Student s1, Student s2){
    if(s1.age == s2.age){
        return s1.gpa > s2.gpa;
    }
    return s1.age > s2.age;
}


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

    sort(v.begin(), v.end(), sortByAgeGPA);


    showStudents(v);




    return 0;
}