#include <iostream>

using namespace std;

int main(){

    freopen("in.txt", "r", stdin);

    /*
    3 3
    5 1 3
    9 3 6
    4 8 2

    18
    // 9 18 14
    */

    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    int sum, maxi = 0, index = 0;
    for(int i = 0; i < n; i++){
        sum = 0;
        for(int j = 0; j < m; j++){
            sum += a[i][j];
        }
        if(sum > maxi){
            maxi = sum;
            index = i;
        }
    }

    cout << maxi << " " << index + 1 << endl;




    return 0;
}