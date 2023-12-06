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

    cin >> s.id >> s.name >> s.age  >> s.gpa; 
   

    cout << s.id << " " << s.name << " " << s.age  << " " << s.gpa << endl; 
        

    return 0;
}