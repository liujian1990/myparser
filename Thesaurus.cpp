//
// Created by liujian on 17-1-4.
//

#include "Thesaurus.h"
#include "Paser.h"

Thesaurus::Thesaurus(){
    _index = {};
}

Thesaurus::~Thesaurus() {}

//生成目录
bool Thesaurus::init(std::string& text) {
    //_index.at(1);
    Position _position = {1, 0, 0};
    int _line_tmp = 0;
    while (_position.end < text.length()){
        _line_tmp = text.find("\n",_position.start);

        if((_position.end=text.find("\t",_position.start)) < _line_tmp){
            _index.push_back(_position);
            _position.start = _position.end;
            ++_position.column;
        } else {
            _index.push_back(_position);
            _position.start = _position.end;
            _position.column = 0;
        }
    }
}

//bool Thesaurus::get_value(int row, int column,void * result){
//    std::string _text;
//    int a;
////_text 根据输入切片
// //   return Paser::paser(_text, result);
//};


