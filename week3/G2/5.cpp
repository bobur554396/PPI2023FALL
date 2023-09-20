#include <iostream>

using namespace std;

int main(){
    /*
        Loop while

        init iterator;
        while(condition){
            instructions of loop

            inc/dec iterator;
        }

        for(init iterator/counter; condition; inc/dec iterator){
            loop body (instruction)
        }
    */

    int i = 0;
    while(i < 20) {
        cout << i << " ";

        i++;
    }


    return 0;
}