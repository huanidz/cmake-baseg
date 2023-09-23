cmake_minimum_required(VERSION 3.10)

project(MathInCmake
    VERSION 1.0
    LANGUAGES C CXX)

set(x 3)
set(y 7)

math(EXPR z "(${x} + ${y}) * 2")
message("Z equals to ${z}")

set(firstFile "/full/path/to/somewhere")
set(secondFile "/full/path/to/another/file")
if(NOT EXISTS ${firstFile})
message(FATAL_ERROR "${firstFile} is missing")
elseif(NOT EXISTS ${secondFile} OR
NOT ${secondFile} IS_NEWER_THAN ${firstFile})
# ... commands to recreate secondFile
endif()