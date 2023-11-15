#include <iostream>

using namespace std;

int f1(int n){
    int res = 1;
    for(int i = 2; i <= n; i++)
        res *= i;
    
    return res;
}

/*
4! = 2 * 3 * 4 = 24

1) f2(4) = 4 * f2(3) = 4 * 6 = 24;
2) f2(3) = 3 * f2(2) = 3 * 2 = 6;
3) f2(2) = 2;

L
[]
[]
[]
[return 4 * f2(3);]
*/

int f2(int n){
    if(n < 1) {
        cout << "The number can not be less than 1\n";
        return 0;
    }
    if(n == 1) // base case
        return 1;
    return n * f2(n - 1); 
}

int main(){
    // Factorial
    // 4! = 1 * 2 * 3 * 4 = 24
    int n;
    cin >> n;

    cout << f1(n) << endl;
    cout << f2(n) << endl; 

    return 0;
}