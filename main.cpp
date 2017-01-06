#include <iostream>
#include <string>
#include "Thesaurus.h"
#include "UserType.h"

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
    UserType mytypea;
    mytypea.paser_callbak();
    int value_1 = 0;
    text.get_value(1,1,&value_1);
    float value_2 = 0.0;

    text.get_value(1,2,&value_2);

    char value_3[10] = {};

    text.get_value(1,0,value_3);

//    UserStruct _userstruct;
//    text.get_value(1,0,&_userstruct);

    return;
}
void t(void* a){
    std::cout<<"void";

}
void t(char* a){
    std::cout<<"char" << a;

}
void t(int* a){
    std::cout<<"int" << *a;

}
template <class T>
void xz(T* b){
    t(b);
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    char x[10] = "12";
    int a=1;
    //t(&a);
    xz(x);
    t(x);
    xz(&a);

    return 0;
}