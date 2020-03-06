//
// Created by Arias Arevalo, Carlos on 3/6/20.
//

#include "cstring.h"
#include <cstring>

CString::CString() {
    sz = new char[1];
    sz[0] = '\0';
}

CString::CString(const CString &copyMe) {
    sz = new char[strlen(copyMe.sz) + 1];
    strcpy(sz, copyMe.sz);
}

CString::CString(const char *str) {
    sz = new char[strlen(str) + 1];
    strcpy(sz, str);
}

CString::~CString() {
    delete[] sz;
}

CString &CString::operator=(const CString &rhs) {
    delete[] sz;
    sz = new char[strlen(rhs.sz) + 1];
    strcpy(sz, rhs.sz);
    return *this;
}

char *CString::c_str() const {
    return sz;
}

CString &CString::operator+=(const CString &rhs) {
    char* tmp = new char[strlen(sz) + strlen(rhs.sz) + 1];
    strcpy(tmp, sz);
    delete[] sz;
    sz = tmp;
    strcat(sz, rhs.sz);
    return *this;
}

CString &CString::operator+=(const char *rhs) {
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

size_t CString::length() const {
    return strlen(sz);
}

size_t CString::size() const {
    return strlen(sz);
}

CString operator+(const CString &lhs, const CString &rhs) {
    CString tmp(lhs);
    tmp += rhs;
    return tmp;
}
