add_executable(hello app.cpp)

target_link_libraries(hello PUBLIC 
    ${CONAN_LIBS}
    helloboiler
)
