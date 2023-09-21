#include <iostream>

using namespace std;

int main(){
    // - [ ] all numbers which divisible by N in range (a, b)

    /*
    5 18 3
    6 9 12 15 18
    */
    int a, b, n;
    cin >> a >> b >> n;

    for(int i = a; i <= b; i++){
        if(i % n == 0){
            cout << i << " ";
        }
    }




    return 0;
}