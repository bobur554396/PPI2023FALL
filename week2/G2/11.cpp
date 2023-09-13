#include <iostream>
#include <bitset>

using namespace std;

int main(){
    // Your are give one integer. Print out "even" or "odd".
    int a;
    cin >> a;

    if(a % 2 == 0){
        cout << "even\n";
    } 

    if(a % 2 == 1){
        cout << "odd\n";
    } 

    

    return 0;
} 