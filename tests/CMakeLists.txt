set(this hellotests)
set(sources
    testdriver.cpp
)

add_executable(${this} ${sources})

target_link_libraries(${this} PUBLIC
    ${CONAN_LIBS}
    helloboiler
)



# add_executable(helloboiler_test test.cpp)
# target_include_directories(helloboiler_test PUBLIC ${CMAKE_CURRENT_BINARY_DIR})
# target_link_libraries(helloboiler_test PUBLIC helloboiler)

# add_test(NAME test COMMAND helloboiler_test)