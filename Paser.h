//
// Created by liujian on 17-1-4.
//

#ifndef MYPARSER_PASER_H
#define MYPARSER_PASER_H

#pragma once
#include <string>
#include "UserType.h"
#include "UserTypeInterface.h"
class Paser {
public:
    Paser();
    ~Paser();
 //   static bool paser(std::string token, void* value);
     bool paser(std::string token, int* value);
     bool paser(std::string token, float* value);
     bool paser(std::string token, char* value);
//    static bool paser(std::string token, UserTypeInterface value);
     bool paser(std::string token, UserType value){
        return (*value._parser)(token, value);
     };
     bool paser(std::string token,auto* value){

     }
};


#endif //MYPARSER_PASER_H
