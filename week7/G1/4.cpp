#include <iostream>

using namespace std;

int main(){
    /*
    4
    1 2 3 4       0 ->
    8 7 6 5       1 <- 
    9 10 11 12    2 ->
    16 15 14 13   3 <-

    3
    1 2 3    0 ->
    6 5 4    1 <-
    7 8 9    2 ->
    */
    int n;
    cin >> n;
    int a[n][n];

    int cnt = 1;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            // Go from left to right ->
            for(int j = 0; j < n; j++){
                a[i][j] = cnt++;
            }
        } else {
            // Go from right to left <-
            for(int j = n - 1; j >= 0; j--){
                a[i][j] = cnt++;
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout.width(3);
            cout << a[i][j] << " ";
        }
        cout << endl;
    }






    return 0;
}