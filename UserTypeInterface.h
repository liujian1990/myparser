//
// Created by baidu on 2017/1/6.
//

#ifndef MYPARSER_USERTYPEINTERFACE_H
#define MYPARSER_USERTYPEINTERFACE_H

#include <string>

class UserTypeInterface {
public:
    template <typename T>
    virtual void Userpaser(std::string token, T) = 0;

};

#endif //MYPARSER_USERTYPEINTERFACE_H
