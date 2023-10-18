#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    
    freopen("in.txt", "r", stdin);
    /*
    In:
    3 3
    3 4 8
    2 7 1
    6 1 5

    Out:
    8 7 6
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
            if(a[i][j] > maxi){
                maxi = a[i][j];
            }
        }
        cout << maxi << " ";
    }


    

    


    return 0;
}