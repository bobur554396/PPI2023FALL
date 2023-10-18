#include <iostream>

using namespace std;

int main(){

    freopen("in.txt", "r", stdin);

    /*
    3 3
    5 1 3
    9 3 6
    4 8 2

    5 9 8
    */

    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    int maxi;
    for(int i = 0; i < n; i++){
        maxi = a[i][0];
        for(int j = 0; j < m; j++){
            if(a[i][j] > maxi)
                maxi = a[i][j];
        }
        cout << maxi << " ";
    }




    return 0;
}