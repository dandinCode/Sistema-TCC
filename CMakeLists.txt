cmake_minimum_required(VERSION 3.23)
project(SistemaDeTCC)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(SistemaDeTCC
        Data/Advisor.cpp
        Data/Advisor.h
        CRUD/Delete.cpp
        CRUD/Delete.h
        Data/Details.cpp
        Data/Details.h
        Data/Evaluator.cpp
        Data/Evaluator.h
        Data/Frequency.cpp
        Data/Frequency.h
        main.cpp
        Menu.cpp
        Menu.h
        CRUD/Register.cpp
        CRUD/Register.h
        CRUD/Search.cpp
        CRUD/Search.h
        Data/Student.cpp
        Data/Student.h
        Data/TCC.cpp
        Data/TCC.h
        CRUD/Update.cpp
        CRUD/Update.h
        CRUD/View.cpp
        CRUD/View.h
        RegistrationsHistory.cpp
        RegistrationsHistory.h
        RegistrationsHistory.txt)
