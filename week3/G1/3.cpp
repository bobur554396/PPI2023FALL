#include <iostream>

using namespace std;

int main(){
    // Print out all odd numbers from 100 till 1.

    for(int i = 100; i > 0; i--){
        if(i % 2 == 1)
            cout << i << " ";
    }


    return 0;
}