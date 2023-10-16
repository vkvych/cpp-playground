cmake_minimum_required(VERSION 3.0.0)

project(cpp-playground VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

find_package(mqtt_cpp_iface REQUIRED)

add_executable(cpp-playground main.cpp)

target_link_libraries(cpp-playground LINK_PUBLIC mqtt_cpp_iface::mqtt_cpp_iface)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
