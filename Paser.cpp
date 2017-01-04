//
// Created by liujian on 17-1-4.
//

#include "Paser.h"
#include <limits.h>
#include <math.h>
Paser::Paser() {

};

Paser::~Paser() {

};

bool Paser::paser(std::string token, int &value) {
    value = atoi(token.c_str());
    if(value ==  (INT_MAX || INT_MIN) ){
        return false;
    }
    return true;

};

bool Paser::paser(std::string token, char *value) {
    if (value == nullptr){
        return false;
    }
    value = const_cast<char*>(token.c_str());
    return true;
};

bool Paser::paser(std::string token, float &value) {
    value = atof(token.c_str());
    if(value ==  HUGE_VAL ){
        return false;
    }

    return true;
};

bool Paser::paser(std::string token, UserType value) {
    return true;
};