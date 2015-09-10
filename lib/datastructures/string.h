#ifndef STRING_H
#define STRING_H

#include <cstring>
#include <ostream>
#include <iostream>
#include <ctime>
#include <sstream>
#include <fstream>

namespace ctci
{

    class string;
    std::ostream&   operator<<(std::ostream& ost, const string& ls);
    string          operator+(const string& s1, const string& s2);
    string          operator+=(const string& s1, const string& s2);
    bool            operator==(const string& s1, const string& s2);

    class string
    {
    public:
        string(char* s);
        string(const char* s);
        string();

        ~string();

        void assign();

        size_t size() const;

        friend std::ostream& operator<<(std::ostream&, const string&);
        friend string operator+(const string& s1, const string& s2);
        friend string operator+=(string& s1, const string& s2);
        friend bool operator==(const string& s1, const string& s2);

    private:
        char* buf;
        bool isAllocated;
        mutable int bsize;
    };
}

#endif // STRING_H

