cmake_minimum_required(VERSION 3.0.0)
project(c_kms VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(c_kms main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
