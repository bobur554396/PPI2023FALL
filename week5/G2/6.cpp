#include <iostream>

using namespace std;

int main(){
    // Nested loops
    for(int i = 0; i < 5; i++){ // index of rows
        cout << "i = " << i << "\n";
        for(int j = 0; j < 5; j++){ // index of columns
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}