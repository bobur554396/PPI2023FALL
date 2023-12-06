#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <time.h>

using namespace std;

int gen(){
    return rand() % 23 + 2000;
}

void show(int a){
    cout << a << " ";
}


int main(){
    // Built in functions 
    /*
        generate
        for_each
    */
    srand(time(0));
    // cout << rand() % 10 + 1 << endl;  // 1 - 10  
    // cout << rand() % 23 + 2000 << endl;  // 2000 - 2022

    vector<int> v(5);
    generate(v.begin(), v.end(), gen);
    for_each(v.begin(), v.end(), show);
    

    // for(int i = 0; i < v.size(); i++)
    //     cout << v[i] << " ";



    return 0;
}