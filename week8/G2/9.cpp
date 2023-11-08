    
#include <iostream>
#include <sstream>

using namespace std;

int main(){
    // stringstream
    stringstream ss;

    ss << "100 " << "hello " << "2.6 ";

    int a;
    string s;
    float f;

    ss >> a >> s >> f;

    cout << a + 2 << endl << s << endl << f * 2 << endl;

    // "hel12lok25btu"
    return 0;
}