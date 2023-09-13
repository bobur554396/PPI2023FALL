#include <iostream>
#include <bitset>

using namespace std;

int main(){
    float points;
    cin >> points;

    /*

    */

    if(points >= 95 && points <= 100) {
        cout << "A" << endl;
    } else if(points >= 90 && points < 95){ // && - AND
        cout << "A-" << endl;
    } else if(points >= 85 && points < 90){
        cout << "B+" << endl;
    } else {
        cout << "F" << endl;
    }


    return 0;
}

