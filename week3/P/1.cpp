#include <iostream>

using namespace std;

int main(){
    /*
    5
    3 5 0 1 4

    res = [1 *] 3 * 5 * 1;
    sum = [0 +] 3 + 5 + 1;
    Output: 15 9

    Find multiplication and sum of odd numbers.
    */

    int n, num, res = 1, sum = 0;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> num;
        if(num % 2 == 1){
            res *= num; //res = res * num;
            sum += num; //sum = sum + num; 
        }
    }

    cout << res << " " << sum << endl;

    

    return 0;
}