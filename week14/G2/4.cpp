#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <time.h>

using namespace std;

void show(int a){
    cout << a << " ";
}

int gen(){
    return rand() % 23 + 2000;
}

int main(){
    srand(time(0));
    
    // Built in functions in <algorithm> lib
    // generate
    vector<int> v(5);

    generate(v.begin(), v.end(), gen);
    for_each(v.begin(), v.end(), show);


    

    

    return 0;
}