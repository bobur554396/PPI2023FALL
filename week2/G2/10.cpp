#include <iostream>
#include <bitset>

using namespace std;

int main(){
    /*
        conditional statements

        if(condition){
            instructions of "if" block
        } else {
            instructions of "else" block
        }
    */
    int a, b;
    cin >> a >> b;

    if(a < b){ // 2 > 3
        cout << a << endl;
    } else {
        cout << b << endl;
    }
    

    return 0;
} 