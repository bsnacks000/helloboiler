### helloboiler

A super primitive boiler for cpp projects using conan/cmake to quickly get a project off the ground. Comes with boost@1.71 for unittests.

Basic build (assuming you have conan installed):

```{bash}
$ mkdir build && cd build
$ conan install .. 
$ cmake .. 
```

To compile the executable and tests (in same dir):
```
$ cmake --build . 
```
