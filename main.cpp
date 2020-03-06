#include <iostream>
#include "cstring.h"
using std::cout;
using std::endl;

void Funktion(CString str){
    cout << str.c_str() << endl;
}
void AnotherCool(const CString& str){
    cout << str[0] << endl;
}
int main() {
    CString a;
    CString b("Mary");
    CString c(" had a lamb");
    AnotherCool(b);
    a = b + c;
    cout << a.c_str() << "\t" << (void*)a.c_str() << endl;
    cout << b.c_str() << endl;
    cout << c.c_str() << endl;

    a += " and it was pretty";
    cout << a.c_str() << "\t" << (void*)a.c_str() << endl;

    cout << "Calling the Cool FunKtion" << endl;
    Funktion(c);
    cout << "------------------------" << endl;

    return 0;
}
