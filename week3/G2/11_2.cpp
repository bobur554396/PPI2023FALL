#include <iostream>

using namespace std;

int main(){
    // prime number
    int n, cnt = 0;
    cin >> n;

    bool isPrime = true;

    for(int i = 2; i < n; i++){
        if(n % i == 0){
            isPrime = false;
            cout << "NO" << endl;
            break;
        }
    }

    if(isPrime == true)
        cout << "YES" << endl;




    return 0;
}