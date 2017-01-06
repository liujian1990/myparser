//
// Created by baidu on 2017/1/6.
//

#ifndef MYPARSER_HOLDER_H
#define MYPARSER_HOLDER_H

#include "PlaceHolder.h"
template<typename ValueType>
class Holder : public PlaceHolder {
public:
    Holder(const ValueType& value) : _held(value) {};
private:
    ValueType _held;
};

#endif //MYPARSER_HOLDER_H
