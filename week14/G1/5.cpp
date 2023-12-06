#include <iostream>

using namespace std;

struct Student {
    string id; // property
    string name; // field
    int age; // struct data
    float gpa;
};


int main(){
    
    int a;
    Student s;

    s.id = "23B001";
    s.name = "KBTU";
    s.age = 23;
    s.gpa = 3.8;

    cout << s.id << " " << s.name << " " << s.age  << " " << s.gpa << endl; 
        

    return 0;
}