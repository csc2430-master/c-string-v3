#include <iostream>
#include "cstring.h"
using std::cout;
using std::endl;

void Funktion(CString str){
    cout << str << endl;
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
    cout << a << "\t" << (void*)a.c_str() << endl;
    cout << b << endl;
    cout << c << endl;

    a += " and it was pretty";
    cout << a << "\t" << (void*)a.c_str() << endl;

    cout << "Calling the Cool FunKtion" << endl;
    Funktion(c);
    cout << "------------------------" << endl;

    return 0;
}
