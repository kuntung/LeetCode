cmake_minimum_required(VERSION 3.0)

project(LEETCODE)

include_directories(include)
add_compile_options(-Wall -g)

add_executable(TESTSTOCK main.cpp src/Solution.cpp src/STOCK.cpp)
# add_executable(TESTSTOCK src/testStock.cpp src/stockProblems.cpp)