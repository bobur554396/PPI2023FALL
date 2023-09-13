#include <iostream>
#include <bitset>

using namespace std;

int main(){
    /*
        You are give one integer number; Print out "even" or "odd";
    */
    int a;
    cin >> a;
    
    if(a % 2 == 0){
        cout << "even" << endl;
    } else {
        cout << "odd" << endl;
    }


    return 0;
}

