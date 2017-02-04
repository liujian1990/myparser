//
// Created by liujian on 17-1-4.
//

#ifndef MYPARSER_PASER_H
#define MYPARSER_PASER_H

#pragma once
#include <string>
#include "UserType.h"
class Paser {
public:
    Paser();
    virtual ~Paser();
 //   static bool paser(std::string token, void* value);
     bool paser(std::string token, int* value);
     bool paser(std::string token, float* value);
     bool paser(std::string token, char* value);

     bool paser(std::string token, UserType* value){
         return value->_paser(token,value->_data);
    };
};


#endif //MYPARSER_PASER_H
