cmake_minimum_required(VERSION 4.4.4)
project(ReversePolishNotationCalculator C)
add_executable(
    rpncalculator 
    src/main.c
)
target_include_directories(
    rpncalculator 
    PRIVATE 
    ${PROJECT_SOURCE_DIR}/include
)
target_include_directories(
    rpncalculator 
    PRIVATE 
    ${PROJECT_SOURCE_DIR}/src
)

install(TARGETS rpncalculator RUNTIME DESTINATION bin)
