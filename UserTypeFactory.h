//
// Created by baidu on 2017/1/6.
//

#ifndef MYPARSER_USERTYPEFACTORY_H
#define MYPARSER_USERTYPEFACTORY_H

#include "UserType.h"
#include <functional>
class UserTypeFactory {
public:
    template<typename ValueType>
    UserType* creator(std::function<bool (std::string, ValueType)> call){
        return new UserType(call);
    };
};

#endif //MYPARSER_USERTYPEFACTORY_H
