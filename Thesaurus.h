//
// Created by liujian on 17-1-4.
//

#ifndef MYPARSER_THESAURUS_H
#define MYPARSER_THESAURUS_H

#define CL(__className) [](){return __className__::create()}

#include <string>
#include <vector>
#include <array>
class Thesaurus {
public:
    Thesaurus();
    ~Thesaurus();
    bool init(std::string& text);

//    template <class T>
//    bool get_value(int row, int column,T* result);
    bool get_value(int row, int column,void* result);

private:
    struct Position{
        int column;
        unsigned long start;
        unsigned long end;
    };
    std::vector <Position> _index;
    //std::vector <std::tuple <int,Position>> _indexs;
    //std::vector < std::vector<Position > > _indexs;
   // std::array<int, 2>

};


#endif //MYPARSER_THESAURUS_H
