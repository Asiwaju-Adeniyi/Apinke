#include <iostream> 
#include <algorithm> 
#include <vector> 
#include <cstring> 
#include <string>

class string {
    private: 
    int len;
    char* data;

    public: 

  string (const std::string& s) : len{s.len} {
        if (len > 0) {
            data = new char[len + 1];
            memcpy(data, s.data, len+1);
        };
    }
};