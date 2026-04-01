// split_str.cpp
#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

vector<string> split(const string& s) {
    vector<string> ret;
    typedef string::size_type str_sz;
    str_sz i = 0;

    while (i != s.size()) {
        while (i != s.size() && isspace(s[i])) {
            ++i;
        }

        str_sz j = i;

        while (j != s.size() && !isspace(s[j])) 
        {
            j++;
        }

        if (i != j) {
            ret.push_back(s.substr(i, j - 1));
            i = j;
        }
    }
    return ret;
}

