#include <iostream>

using namespace std;

int main(){
    // Loop while

    /*

    init iterator;
    while(condition){
        loop instructions

        inc/dec iterator;
    }
    */

    int i = 0;
    while(i < 20){
        if(i == 15)
            break;
        
        i++;

        if(i % 2 == 0)
            continue;

        cout << i << " ";
    }




    return 0;
}