#include "lib/datastructures/string.h"

#include <cstring>
#include <iostream>
#include "assert.h"

size_t ctci::string::npos = -1;

ctci::string::string() {
    buf = (char*)calloc(1, 1);
}

ctci::string::string(char* s) {
    buf = (char*)calloc(strlen(s) + 1, 1);
    buf = strcpy(buf, s);
}

ctci::string::string(const char* s) {
    buf = (char*)calloc(strlen(s) + 1, 1);
    buf = strcpy(buf, s);
}

ctci::string::~string() {
    free(buf);
    buf = 0;
}

ctci::string::string(const string& rOther) {
    buf = (char*)calloc(strlen(rOther.buf) + 1, 1);
    buf = strcpy(buf, rOther.buf);
}

size_t ctci::string::size() const {
    return strlen(buf);
}

ctci::string ctci::string::substr(pos start, pos len) {
    string s;
    assert(start >= 0 && start + len <= size());
    free(s.buf);
    s.buf = (char*)calloc(len + 1, 1);
    memcpy(s.buf, buf + start, len);
    return s;
}

std::ostream& ctci::operator<<(std::ostream& ost, const ctci::string& ls) {
    return ost << ls.buf;
}

ctci::string ctci::operator+(const ctci::string& s1, const ctci::string& s2) {
    ctci::string str;
    free(str.buf);
    str.buf = 0;
    size_t l = s1.size() + s2.size() + 1;
    str.buf = (char*)calloc(l, 1);
    memcpy(str.buf, s1.buf, s1.size());
    memcpy(str.buf + s1.size(), s2.buf, s2.size());
    return str;
}


ctci::string ctci::operator+=(ctci::string& s1, const ctci::string& s2) {
    int l = s1.size() + s2.size() + 1;
    char* c = (char*)calloc(l, 1);
    memcpy(c, s1.buf, s1.size());
    memcpy(c + s1.size(), s2.buf, s2.size());
    s1.buf = c;
    return s1;
}

bool ctci::operator==(const ctci::string& s1, const ctci::string& s2) {
    return strcmp(s1.buf, s2.buf) == 0;
}

bool ctci::operator!=(const ctci::string& s1, const ctci::string& s2) {
    return strcmp(s1.buf, s2.buf) != 0;
}

char& ctci::string::operator[](const unsigned int ind) {
    return buf[ind];
}

const char& ctci::string::operator[](const unsigned int ind) const {
    return buf[ind];
}

ctci::string& ctci::string::operator=(const ctci::string& other) { // copy assignment
    if (this != &other) {
        free(buf);
        buf = (char*)calloc(other.size() + 1, 1);
        strcpy(buf, other.buf);
    }
    return *this;
}

size_t ctci::string::find(const char* s, size_t pos) const {
    int len = strlen(s);
    for (size_t i = pos; i < size(); i++) {
        if (strncmp(s, buf+i, len) == 0) {
            return i;
        }
    }
    return npos;
}
