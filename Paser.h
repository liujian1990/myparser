//
// Created by liujian on 17-1-4.
//

#ifndef MYPARSER_PASER_H
#define MYPARSER_PASER_H


#include <string>
#include "UserType.h"
class Paser {
public:
    Paser();
    ~Paser();
    static bool paser(std::string token, void* value);
    static bool paser(std::string token, int& value);
    static bool paser(std::string token, float& value);
    static bool paser(std::string token, char* value);
    static bool paser(std::string token, UserType value);
};


#endif //MYPARSER_PASER_H
