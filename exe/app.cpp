#include <helloboiler/hello.hpp>
#include <iostream> 

int main(int argc, char const *argv[])
{
    Hello h; 
    std::cout << h.say_hello() << std::endl;
    return 0;
}
