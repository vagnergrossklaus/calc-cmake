project(calc)

add_library(calc SHARED
    src/calc/calculator.h
    src/calc/calculator.cpp
)

target_include_directories(calc 
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src
)
