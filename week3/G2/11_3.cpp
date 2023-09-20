#include <iostream>

using namespace std;

int main(){
    // prime number
    int n, cnt = 0;
    cin >> n;

    for(int i = 2; i < n; i++){
        if(n % i == 0){
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;


    return 0;
}