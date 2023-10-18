#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    /* Snake logic
    In:
    3

    Out:
    1 2 3
    6 5 4
    7 8 9

    4
    1   2  3  4 ===> 0 -> from left to right
    8   7  6  5 ===> 1 -> from right to left
    9  10 11 12 ===> 2 -> from left to right
    16 15 14 13 ===> 3 -> from right to left


    3

    1 2 3
    4 5 6
    7 8 9
    */
    int n;
    cin >> n;
    int a[n][n];

    int cnt = 1;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            // ->
            for(int j = 0; j < n; j++){
                a[i][j] = cnt++;
            }
        } else {
            // <-
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