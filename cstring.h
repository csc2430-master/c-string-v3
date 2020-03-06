//
// Created by Arias Arevalo, Carlos on 3/6/20.
//

#ifndef C_STRING_V3_CSTRING_H
#define C_STRING_V3_CSTRING_H
#include <iostream>

class CString {
    char* sz;
public:
    CString();
    CString(const CString& copyMe);
    CString(const char* str);
    ~CString();
    CString& operator=(const CString& rhs);

    char* c_str()const;
    CString& operator+=(const CString& rhs);
    CString& operator+=(const char* rhs);
    char& operator[](size_t index);
    const char& operator[](size_t index)const;

    bool operator==(const CString&)const;

    size_t length()const;
    size_t size()const;
};

CString operator+(const CString& lhs, const CString& rhs);
// Mixed Arithmetic
CString operator+(const CString& lhs, const char* rhs);
CString operator+(const char* lhs, const CString& rhs);

#endif //C_STRING_V3_CSTRING_H
