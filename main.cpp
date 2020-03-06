#include <iostream>
#include "cstring.h"
using std::cout;
using std::endl;

void Funktion(CString str){
    cout << str.c_str() << endl;
}

int main() {
    CString a;
    CString b("Mary");
    CString c(" had a lamb");
    a = b + c;
    cout << a.c_str() << "\t" << (void*)a.c_str() << endl;
    cout << b.c_str() << endl;
    cout << c.c_str() << endl;

    a += " and it was pretty";
    cout << a.c_str() << "\t" << (void*)a.c_str() << endl;

    return 0;
}
