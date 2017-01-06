cmake_minimum_required(VERSION 3.6)
project(myparser)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Thesaurus.cpp Thesaurus.h Paser.cpp Paser.h UserType.h CreatUserType.h UserTypeInterface.h Holder.h PlaceHolder.h UserTypeFactory.h)
add_executable(myparser ${SOURCE_FILES})