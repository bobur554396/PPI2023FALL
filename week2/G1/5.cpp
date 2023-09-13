#include <iostream>

using namespace std;

int main(){
    // - [ ] printf with floating numbers (M_PI)
    
    // float pi = 3.145413123;
    // cout << pi << endl;

    /* printf()

    printf(format, **values)
    format options:
    %i - integers
    %f - real numbers
    %c - chars
    %s - string
    ...

    "%[align].[fraction]f"
    */
    // cout << "num = " << 4 << endl;
    // printf("num = %i\n", 4);

    float pi = 3.145813123;
    // printf("pi = %0.3f\n", pi);
    printf("pi = %.3f\n", pi);
    

   
    


    return 0;
}