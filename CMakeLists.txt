cmake_minimum_required(VERSION 3.0.0)
project(jenkinsWorld-v2 VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(jenkinsWorld-v2 main.cpp Personaje.cpp Personaje.h Ejercito.cpp Ejercito.h)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
