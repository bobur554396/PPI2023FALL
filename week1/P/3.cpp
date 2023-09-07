#include <iostream>

using namespace std;

int main(){

    // Variables 
    // Data type: int, float, double, string...

    // Creation of the variable names:
    /*

    allowed_symbols: [a-zA-Z0-9_]
    
    correct names:
        number123, my_number, MyNumber,
        MAX_VALUE, _value
    
    incorrect names:
        1num, my number, num%$^, 12, int
    */
   
    // int number1; 
    int number1 = 6;
    int number2 = 3;
    int result = number1 + number2;

    cout << result << endl;

    return 0;
}