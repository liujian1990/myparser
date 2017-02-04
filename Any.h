//
// Created by baidu on 2017/1/18.
//

#ifndef MYPARSER_ANY_H
#define MYPARSER_ANY_H
class BaseHolder
{
public:
    virtual ~BaseHolder()    {}
};

template <typename T>
class Holder : public BaseHolder
{
public:
private:
    T _data;
};

class Any {
    //Any:m_tpI

};

#endif //MYPARSER_ANY_H
