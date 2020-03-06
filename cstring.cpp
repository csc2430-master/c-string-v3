//
// Created by Arias Arevalo, Carlos on 3/6/20.
//

#include "cstring.h"
#include <cstring>

#include <iostream>
using std::cout;
using std::endl;

CString::CString() {
    sz = new char[1];
    sz[0] = '\0';
    cout << "CString::CString()" << endl;
}

CString::CString(const CString &copyMe) {
    sz = new char[strlen(copyMe.sz) + 1];
    strcpy(sz, copyMe.sz);
    cout << "CString::CString(const CString &copyMe)" << endl;
}

CString::CString(const char *str) {
    sz = new char[strlen(str) + 1];
    strcpy(sz, str);
    cout << "CString::CString(const char *str)" << endl;
}

CString::~CString() {
    delete[] sz;
    cout << "CString::~CString()" << endl;
}

CString &CString::operator=(const CString &rhs) {
    cout << "CString &CString::operator=(const CString &rhs)" << endl;
    if (&rhs == this)
        return *this;
    delete[] sz;
    sz = new char[strlen(rhs.sz) + 1];
    strcpy(sz, rhs.sz);
    return *this;
}

char *CString::c_str() const {
    return sz;
}

CString &CString::operator+=(const CString &rhs) {
    cout << "CString &CString::operator+=(const CString &rhs)" << endl;
    char* tmp = new char[strlen(sz) + strlen(rhs.sz) + 1];
    strcpy(tmp, sz);
    delete[] sz;
    sz = tmp;
    strcat(sz, rhs.sz);
    return *this;
}

CString &CString::operator+=(const char *rhs) {
    cout << "CString &CString::operator+=(const char *rhs)" << endl;
//    return *this += CString(rhs);
    char* tmp = new char[strlen(sz) + strlen(rhs) + 1];
    strcpy(tmp, sz);
    delete[] sz;
    sz = tmp;
    strcat(sz, rhs);
    return *this;
}

char &CString::operator[](size_t index) {
    return sz[index];
}
const char &CString::operator[](size_t index) const{
    return sz[index];
}

size_t CString::length() const {
    return strlen(sz);
}

size_t CString::size() const {
    return strlen(sz);
}

bool CString::operator==(const CString &rhs) const {
    return strcmp(sz, rhs.sz) == 0;
}

CString operator+(const CString &lhs, const CString &rhs) {
    cout << "CString operator+(const CString &lhs, const CString &rhs)" << endl;
    CString tmp(lhs);
    tmp += rhs;
    return tmp;
}

CString operator+(const CString &lhs, const char *rhs) {
    cout << "CString operator+(const CString &lhs, const char *rhs)" << endl;
    CString tmp(lhs);
    tmp += rhs;
    return tmp;
}

CString operator+(const char *lhs, const CString &rhs) {
    cout << "CString operator+(const char *lhs, const CString &rhs)" << endl;
    CString tmp(lhs);
    tmp += rhs;
    return tmp;
}
