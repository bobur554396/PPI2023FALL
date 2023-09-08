#include <iostream>

using namespace std;

int main(){
    // Variables
    // Data type
    // 1) integer numbers: 1, 2, 0, -5, 100, ...
    
    /*
    Variable name rules:

    allowed symbols: [a-zA-Z0-9_]

    correct names:
        first, number1, N4, MyNumber, 
        mynumber, my_number, _
    
    incorrect names:
        12num, 12, number%$!, my number,
        "reserved words from PL" - int, return
        
    */

    int first = 2;
    int second = 6;

    int result = first + second;
    cout << result << endl;

    return 0;
}