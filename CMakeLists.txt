cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(main)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_OSX_ARCHITECTURES "x86_64")
add_executable(main main.cpp)
add_library(tools 
    STATIC 
        tools.hpp
        tools.cpp
)

add_library(mahasiswa 
    STATIC 
        mahasiswa.hpp
        mahasiswa.cpp
        tools.hpp
        tools.cpp
)

add_library(mata_kuliah
    STATIC
        mata_kuliah.hpp
        mata_kuliah.cpp
        tools.hpp
        tools.cpp
)

add_library(nilai
    STATIC
        nilai.hpp
        nilai.cpp
        tools.hpp
        tools.cpp
)
target_link_libraries(main tools)
target_link_libraries(main mata_kuliah)
target_link_libraries(main nilai)
target_link_libraries(main mahasiswa)

