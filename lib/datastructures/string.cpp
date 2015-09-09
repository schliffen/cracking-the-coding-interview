#include "lib/datastructures/string.h"

ctci::string::string(char *s):
    buf(s),
    isAllocated(false)
{
}

ctci::string::string(const char *s):
    buf((char*)s),
    isAllocated(false)
{
}

ctci::string::string()
{
    buf = (char*)malloc(1);
    buf[0]='\0';
    isAllocated = true;
}

ctci::string::~string()
{
    if (isAllocated)
        free(buf);
}

void ctci::string::assign()
{
    char* p = (char*)malloc(size());
    memcpy(p, buf, size());
    buf = p;
    isAllocated = true;
}

size_t ctci::string::size() const
{
    return strlen(buf);
}

std::ostream& ctci::operator<<(std::ostream& ost, const ctci::string& ls)
{
    return ost<<ls.buf;
}

ctci::string ctci::operator+(const ctci::string& s1, const ctci::string& s2)
{
    size_t l = s1.size()+s2.size()+1;
    char* nbuf = (char*)malloc(l);
    memcpy(nbuf, s1.buf, s1.size());
    memcpy(nbuf+s1.size(), s2.buf, s2.size());
    nbuf[l-1]='\0';
    ctci::string str(nbuf);
    str.assign();
    return str;
}

bool ctci::operator==(const ctci::string& s1, const ctci::string& s2)
{
    return strcmp(s1.buf, s2.buf) == 0;
}

