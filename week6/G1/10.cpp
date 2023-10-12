#include <iostream>

using namespace std;


int main(){
    // Is symmetric matrix?

    freopen("in.txt", "r", stdin);

    /*
    3
    1 2 7
    2 5 6
    7 6 9
    
    00 01 02
    10 11 12
    20 21 22    


    */

    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    bool ok = false;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] != a[j][i]) {
                cout << "NO" << endl;
                ok = true;
                break;
            }
        }
        if(ok == true)
            break;
    }

    if(ok == false)
        cout << "YES" << endl;
    




    return 0;
}