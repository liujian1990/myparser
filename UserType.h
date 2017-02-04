//
// Created by liujian on 17-1-4.
//

#ifndef MYPARSER_USERTYPE_H
#define MYPARSER_USERTYPE_H
#pragma once
#include <regex>

struct UType{
    int flag;
    long long len;
    unsigned char* data;
};

class UserType {
public:
    template<typename ValueType>
    UserType (std::function<bool (std::string, ValueType)> call){
        _paser = call;
        _data = nullptr;
    };
    ~UserType();
    template<typename ValueType>
    std::function<bool (std::string, ValueType)> _paser;
    template<typename ValueType>
    ValueType* _data;

};


#endif //MYPARSER_USERTYPE_H
