#include <iostream>

using namespace std;

int main(){
    int number1;
    int number2;

    // cin: console/terminal input
    cout << "Please, enter two integer number...\n";
    cin >> number1;
    cin >> number2;

    int result = number1 + number2;

    cout << result << endl;

    return 0;
}