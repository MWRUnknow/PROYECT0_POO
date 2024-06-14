cmake_minimum_required(VERSION 3.28)
project(POO_PROYECT)

set(CMAKE_CXX_STANDARD 20)

add_executable(POO_PROYECT main.cpp
        USER.h
        USER.cpp
        ADMIN.h
        ADMIN.cpp
        DOCENTE.h
        DOCENTE.cpp
        ALUMNO.h
        ALUMNO.cpp)
