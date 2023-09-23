cmake_minimum_required(VERSION 3.10)

project(CACHE_VARIABLE_EXAMPLE
    VERSION 0.0.1
    LANGUAGES C CXX)

set(MY_CACHE_VARIABLE foo CACHE STRING "This is the cache varialbe")

message("current MY_CACHE_VARIABLE value: ${MY_CACHE_VARIABLE}")

string(FIND abcdefabcdef def fwdIndex)
string(FIND abcdefabcdef def revIndex REVERSE)
message("fwdIndex = ${fwdIndex}\n"
"revIndex = ${revIndex}")

set(myList a;b;c) # Creates the list "a;b;c"
list(LENGTH myList len)
message("length = ${len}")
list(GET myList 2 1 letters)
message("letters = ${letters}")