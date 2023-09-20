#include <iostream>

using namespace std;

int main(){
    // break; continue;

    for(int i = 0; i < 20; i++){
        if(i % 2 == 0)
            continue;

        cout << i << " ";

        if(i == 15)
            break;

    }

    


    return 0;
}