#include <iostream>

using namespace std;

int first(int n){
    int res = 1;
    for(int i = 1; i <= n; i++)
        res *= i;
    return res;
}
/*
4! = 1 * 2 * 3 * 4 = 24

1) second(4) = 4 * second(3) = 4 * 6 = 24
2) second(3) = 3 * second(2) = 3 * 2 = 6
3) second(2) = 2 * second(1) = 2 * 1 = 2
4) second(1) = 1


[]
[2 * second(1)]
[3 * second(2)]
[4 * second(3)]
*/

int second(int n){ // 4
    if(n == 1) // base case
        return 1;
    return n * second(n - 1);
}

int main(){
    // 4! = 1 * 2 * 3 * 4 = 24

    int n;
    cin >> n;

    cout << first(n) << endl;
    cout << second(n) << endl;

    return 0;
}