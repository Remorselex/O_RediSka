cmake_minimum_required(VERSION 3.28)
project(DtStrct)

set(CMAKE_CXX_STANDARD 17)

add_executable(DtStrct main.cpp
        src/Containers/LinkedList/LinkedListNode.h
        src/Containers/LinkedList/LinkedList.h
        src/Containers/BinaryThree/BinaryThree.h
)
