#include <iostream>

using namespace std;

int f1(int n){
    int res = 0;
    for(int i = 1; i <= n; i++)
        res += i;
    
    return res;
}

/*
4 => 1 + 2 + 3 + 4 = 24

1) f2(4) = 4 + f2(3) = 4 + 6 = 10;
2) f2(3) = 3 + f2(2) = 3 + 3 = 6;
3) f2(2) = 2 + f2(1) = 2 + 1 = 3;
4) f2(1) = 1;
*/

int f2(int n){
    if(n == 1) // base case
        return 1;
    return n + f2(n - 1); 
}

int main(){
    // 4 => 1 + 2 + 3 + 4 = 10
    int n;
    cin >> n;

    cout << f1(n) << endl;
    cout << f2(n) << endl; 

    return 0;
}