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

bool ctci::operator==(const ctci::string& s1, const ctci::string& s2)
{
    return strcmp(s1.buf, s2.buf) == 0;
}

