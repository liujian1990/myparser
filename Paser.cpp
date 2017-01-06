//
// Created by liujian on 17-1-4.
//

#include "Paser.h"
#include <limits.h>
#include <math.h>
#include <stdlib.h>
#include <exception>
#include <iostream>
Paser::Paser() {

};

Paser::~Paser() { };

//bool paser(std::string token, void* value){
//    return paser(token, value);
//};

bool Paser::paser(std::string token, int* value) {

    //std::string::size_type _sz = 0;
    try {
        *value = std::stoi(token, nullptr);
    } catch(const std::exception &e) {
        std::cerr << "Paser error (" << e.what() << ")\n";
        return false;
    }

    return true;

};


bool Paser::paser(std::string token, float* value) {
    std::string::size_type _sz = 0;

    try {
        *value = std::stof(token, &_sz);
    } catch(const std::exception &e) {
        std::cerr << "Paser error (" << e.what() << ")\n";
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

//bool Paser::paser(std::string token, UserType<auto> value) {
//  //  value.Userpaser(token,value.);
//    (*value._parser)(token, value);
//    return true;
//};