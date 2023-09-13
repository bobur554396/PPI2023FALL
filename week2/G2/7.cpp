#include <iostream>

using namespace std;

int main(){
    // printf
    /*
        printf(format, **values)

        format:
        %i - integers
        %f - real numbers
        %c - chars
        %s - strings
        ...

        real numbers: %[align].[fraction]f
    */

    float pi = 3.14163234;
    cout << "pi = " << pi << endl;
    printf("%7.3f\n", pi);
    printf("%0.3f\n", pi);
    printf("%.3f\n", pi);
    printf("num = %i\n", 10);


    return 0;
}