#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int a[4] = {8, 2, 7, 6};

    // cout << *(a + 0) << endl; // a[0]
    // cout << *(a + 1) << endl; // a[1]
    // cout << *(a + 2) << endl; // a[2]
    // cout << *(a + 3) << endl; // a[3]

    // sort([address_of_first_element, address_of_last_element + 1));
    // sort(a, a + 4);
    // sort(a, a + 3);
    // reverse(a, a + 4);
    reverse(a + 1, a + 4);

    for(int i = 0; i < 4; i++)
        cout << a[i] << " ";
    
    cout << endl;


    return 0;
}