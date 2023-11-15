cmake_minimum_required(VERSION 3.26)
project(Assignment3)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Assignment3
        Assignment3.cpp
        QueueADT.h
        Simulation.h
        Queue.h
        Queue.cpp
        Node.h
        Customer.h
        Simulation.cpp
)
