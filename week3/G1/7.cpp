#include <iostream>

using namespace std;

int main(){
    // Your are given list of numbers. Find out sum of all odd numbers.
    // Numbers list will be finished by 0.
    

    /*
    1 2 3 0
    4


    12 6 9 3 1 0
    13
    */

    int n, sum = 0;

    for( ; ; ){
        cin >> n;
        if(n == 0){
            break;
        }
        if(n % 2 == 1)
            sum += n;
    }

    cout << sum << endl;


    return 0;
}