cmake_minimum_required(VERSION 3.8)

project(utilslib
VERSION 1.0
LANGUAGES C CXX)

add_library(UtilsLib ${CMAKE_CURRENT_SOURCE_DIR}/src/utils.cpp)
