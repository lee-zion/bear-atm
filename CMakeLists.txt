cmake_minimum_required(VERSION 3.5)
project(bearatm)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_executable(BearATMController ${SOURCES})
add_library(bearatmlib ${SOURCES})
target_link_libraries(BearATMController bearatmlib)
add_subdirectory(extern/googletest)
file(GLOB TEST_SOURCES "test/*.cpp")
add_executable(runTests ${TEST_SOURCES})
target_link_libraries(runTests gtest_main bearatmlib)