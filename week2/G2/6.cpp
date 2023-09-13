#include <iostream>

using namespace std;

int main(){
    // - [x] comparison operators (==, !=, >, <, >=, <=)

    // bool isEqual = (2 == 2) && (3 > 1) && (4 < 10); // && - AND
    // bool isEqual = (2 == 3) || (3 > 1) || (10 < 12); // || - OR
    bool isEqual = !(2 == 3); // ! - NOT

    cout << isEqual << endl;



    return 0;
}