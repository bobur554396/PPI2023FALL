#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    
    freopen("in.txt", "r", stdin);
    /*
    In:
    3 3
    3+4+8
    2+7+1
    6+1+5

    Out:
    15 10 12
    */
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    int sum;
    for(int i = 0; i < n; i++){
        sum = 0;
        for(int j = 0; j < m; j++){
            sum += a[i][j];
        }
        cout << sum << " ";
    }


    

    


    return 0;
}