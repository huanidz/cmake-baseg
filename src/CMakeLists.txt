cmake_minimum_required(VERSION 3.5)

# The project name and version of the project
# And also the languages used in the project
project(MyApp
    VERSION 1.0
    LANGUAGES C CXX)

add_library(MyOtherThingLib STATIC otherThing.cpp)

add_library(MyFunctionLib STATIC math_func.cpp)

target_link_libraries(MyFunctionLib PRIVATE MyOtherThingLib)

option(USE_SPDLOG "BUILD WITH SPDLOG LIBRARY" OFF)

if(USE_SPDLOG)
    
endif()

# Make platform-dependent executable (Windows would be .exe and for Unix-based would be the target name)
add_executable(MyApp main.cpp)

target_link_libraries(MyApp PRIVATE MyFunctionLib)