#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <time.h>

using namespace std;


int main(){
    srand(time(0));

    // cout << rand() << endl; // [0 - RAND_MAX] => RAND_MAX ~> 32000

    // cout << rand() % 10 << endl; // [0 - 9]
    // cout << rand() % 10 + 1 << endl; // [1 - 10]
    cout << rand() % 23 + 2000  << endl; // [2000 - 2022]

    return 0;
}