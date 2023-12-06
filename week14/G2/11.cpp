#include <iostream>
#include <algorithm>
#include <vector>
#include "student.h" // .h - header file

using namespace std;

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