#include "lib/datastructures/string.h"

ctci::string::string(char *s):
    buf(s),
    isAllocated(false),
    bsize(0)
{
}

ctci::string::string(const char *s):
    buf((char*)s),
    isAllocated(false),
    bsize(0)
{
}

ctci::string::string()
{
    buf = (char*)malloc(1);
    buf[0]='\0';
    isAllocated = true;
    bsize = 0;
}

ctci::string::~string()
{
    if (isAllocated)
        free(buf);
}

void ctci::string::assign()
{
    int s = size();
    char* p = (char*)calloc(1,s+1);
    memcpy(p, buf, size());
    isAllocated = true;
    buf = p;
}

size_t ctci::string::size() const
{
    if (bsize == 0)
    {
        bsize = strlen(buf);
    }
    return bsize;
}

std::ostream& ctci::operator<<(std::ostream& ost, const ctci::string& ls)
{
    return ost<<ls.buf;
}

ctci::string ctci::operator+(const ctci::string& s1, const ctci::string& s2)
{
    ctci::string str;
    free(str.buf);
    size_t l = s1.size()+s2.size()+1;
    str.buf = (char*)calloc(1, l);
    memcpy(str.buf, s1.buf, s1.size());
    memcpy(str.buf+s1.size(), s2.buf, s2.size());
    return str;
}


ctci::string ctci::operator+=(ctci::string& s1, const ctci::string& s2)
{
    int l = s1.size() + s2.size() + 1;
    if (s1.isAllocated)
    {
        s1.buf = (char*)realloc(s1.buf, l);
        memcpy(s1.buf+s1.size(), s2.buf, s2.size());
        s1.buf[l] = '\n';
        s1.bsize = l-1;
    }
    else
    {
        char* c = (char*)calloc(1, l);
        memcpy(c, s1.buf, s1.size());
        memcpy(c+s1.size(), s2.buf, s2.size());
        s1.buf = c;
        s1.bsize = l-1;
    }
    return s1;
}

bool ctci::operator==(const ctci::string& s1, const ctci::string& s2)
{
    return strcmp(s1.buf, s2.buf) == 0;
}

