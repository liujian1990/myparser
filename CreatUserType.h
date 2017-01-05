//
// Created by baidu on 2017/1/5.
//

#ifndef MYPARSER_CREATUSERTYPE_H
#define MYPARSER_CREATUSERTYPE_H

#include "UserType.h"

class CreatUserType {
public:
    CreatUserType(){};
    ~CreatUserType(){};
    virtual UserType* create(){
        return new UserType;
    };
private:
    UserType* _product;
};

#endif //MYPARSER_CREATUSERTYPE_H
