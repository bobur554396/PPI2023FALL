#include <iostream>

using namespace std;

int main(){
    // Multiplication table
    for(int i = 0; i <= 9; i++){
        for(int j = 0; j <= 9; j++) {
            cout << i * j << " ";
        }
        cout << endl;
    }

    return 0;
}