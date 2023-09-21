#include <iostream>

using namespace std;

int main(){
    // Print out all even numbers from 1 till 100.

    for(int i = 1; i <= 100; i++){
        if(i % 2 == 0)
            cout << i << " ";
    }



    return 0;
}