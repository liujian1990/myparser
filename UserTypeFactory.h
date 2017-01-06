//
// Created by baidu on 2017/1/6.
//

#ifndef MYPARSER_USERTYPEFACTORY_H
#define MYPARSER_USERTYPEFACTORY_H

#include "UserType.h"

class UserTypeFactory {
public:
    template <class T>
    bool creat_type(T){
        _hash = typeid(T).hash_code();
        _uertype = new UserType();
    }

    template <class T>
    UserType* get_type(T){
        if(typeid(T).hash_code() == _hash){
            return _uertype;
        }
    }

private:
    static size_t _hash;
    UserType* _uertype;

};

#endif //MYPARSER_USERTYPEFACTORY_H
