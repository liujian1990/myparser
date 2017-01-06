//
// Created by liujian on 17-1-4.
//

#ifndef MYPARSER_USERTYPE_H
#define MYPARSER_USERTYPE_H
#pragma once
#include <regex>
#include "UserTypeInterface.h"
#include "Holder.h"
class UserType {
public:
//    UserType() : _content(nullptr){};
//    template<typename ValueType>
//    UserType(const ValueType& value) : _content(new Holder<ValueType>(value)){};
//    ~UserType(){
//       delete _content;
//    }
//    bool type_registe(int a){
//        decltype(a);
//    }
   // template<class ValueType>
    typedef bool (*callback)(std::string, auto);
    callback _parser;

    void bindpaser(callback f){
        _parser = f;
    }
private:
//    typedef ValueType _type;
//    _type value;
  //  PlaceHolder* _content;

};


#endif //MYPARSER_USERTYPE_H
