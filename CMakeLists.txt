cmake_minimum_required(VERSION 3.17)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp rank.cpp rank.h rank_handler.cpp rank_handler.h handler.cpp handler.h)