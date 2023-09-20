#include <iostream>

using namespace std;

int main(){
    // You are given list of integer numbers. 
    // Find out the sum of all even numbers from list.
    // Numbers list will be finished by 0.

    /*
    1 2 3 4 0
    6

    1 2 3 0
    2

    10 12 0
    22
    */

    int n, sum = 0;
    for(;;){
        cin >> n;
        if(n == 0)
            break;

        if(n % 2 == 0)
            sum += n; // sum = sum + n;
    }

    cout << sum << endl;


    return 0;
}