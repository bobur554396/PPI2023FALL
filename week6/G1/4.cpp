#include <iostream>

using namespace std;


int main(){
    // Find maximum element from matrix

    freopen("in.txt", "r", stdin);

    // Read matrix from terminal
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }


    int maxi = a[0][0], maxi_2 = a[0][0];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] > maxi)
                maxi = a[i][j];
            
            // logic for maxi_2

        }
    }

    cout << maxi << endl;



    return 0;
}