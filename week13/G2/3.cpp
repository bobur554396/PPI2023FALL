#include <iostream>
#include <map>

using namespace std;


int main(){
    map<string, vector<float> > m;
    /*
    4
    23B001 2 4 5 2 4 ...
    23B002 23.2
    */

    int a;
    map<string, map<string, float> > m2;
    map<string, map<string, float> >::iterator it = m2.begin();
    pair<string, map<string, float> > p3 = (*it);

    // p3.first -- student ID
    // p3.second --- map

    /*
    4
    23B001
        MATH 20
        PP1 40
        ...
    23B002
        ...
    */



    return 0;
}