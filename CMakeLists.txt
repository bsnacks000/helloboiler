cmake_minimum_required(VERSION 3.10)
project(helloboiler VERSION 0.1.0)

add_definitions("-std=c++14")

set(CMAKE_POSITION_INDEPENDENT_CODE ON)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake) 
conan_basic_setup()

# add subdiretories
# include(external/external.cmake)
# add_subdirectory(external) -- only if you have an external you can't use with conan

add_subdirectory(src)
add_subdirectory(exe)
add_subdirectory(tests)
