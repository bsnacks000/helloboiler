# set headers
set(header_path "${helloboiler_SOURCE_DIR}/include/helloboiler")
set(header 
    ${header_path}/hello.hpp
)

# set source files
set(src 
    hello.cpp 
)

# define library target
add_library(helloboiler ${header} ${src})

target_include_directories(helloboiler PUBLIC 
    ${helloboiler_SOURCE_DIR}/include 
    ${CMAKE_CURRENT_BINARY_DIR}
    ${CONAN_LIBS}
)
