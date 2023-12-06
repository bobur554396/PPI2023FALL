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

bool sortByAge(Student s1, Student s2){
    return s1.age > s2.age;
}

bool sortByAgeGPA(Student s1, Student s2){
    if(s1.age == s2.age){
        return s1.gpa > s2.gpa;
    }
    return s1.age > s2.age;
}

Student findByID(vector<Student> v, string id){
    
}
