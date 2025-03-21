cmake_minimum_required(VERSION 3.16.3)

project(multilingual-hello-world LANGUAGES CXX)

add_compile_options(-Wall -Wextra -Wshadow -Werror -Wconversion -pedantic)

include_directories("${PROJECT_SOURCE_DIR}/include")

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory("${PROJECT_SOURCE_DIR}/src")
