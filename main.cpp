#include <iostream>
#include <string>
#include "Thesaurus.h"
enum FLAG{
    OK,
    FAIL,
    NONE
};

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;
struct UserStruct {
    FLAG stat;
    long length;
    const char* value;
};

void test(){
    std::string context =
            "ab\t111\t1.69\thello\t2:ai,bi\n"\
            "hellob\n"\
            "3:11,123,00\t111\t1.69\thello\t2:ai,bi\n";
    Thesaurus text;
    int value_1 = 0;
//    text.get_value(1,1,&value_1);
//    float value_2 = 0.0;
//
//    text.get_value(1,2,&value_2);
//
//    char value_3[10] = {};
//    text.get_value(1,0,&value_3);
//
//    UserStruct _userstruct;
//    text.get_value(1,0,&_userstruct);

    return;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}