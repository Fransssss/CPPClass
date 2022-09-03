cmake_minimum_required(VERSION 3.21)
project(CPPClass)

set(CMAKE_CXX_STANDARD 14)

add_executable(CPPClass main.cpp WishList.cpp WishList.h CapitalWord.h ValidDigit.h)
