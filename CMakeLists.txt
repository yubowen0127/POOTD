cmake_minimum_required(VERSION 3.10)

# set the project name
project(Tutorial)


# enable modern C++
set(CMAKE_CXX_STANDARD 17)

# add the executable
add_executable(Main.exe main.cpp HyperExample.cpp PETScExample.cpp)

add_executable(Test.exe Test.cpp)

add_subdirectory(mylib_dir output)

target_link_libraries(mylib mylib_dir)

target_include_directories(target_so PUBLIC /usr/mylib_dir)

enable_testing()
add_test(Testt Test.exe)
add_test(Test HyperExample.cpp PETScExample.cpp)
add_test(Testm Main.exe)
