#Parent Cmakelist

# way to build this project
# cmake -S . -B build-files

# for building run command: cmake -S PATH -B PATH /
# Where -S is source and -B build /
# for now -S is in src folder, build is in build-env /

cmake_minimum_required(VERSION 3.19)

# set the project name
project(MyApp VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(Networking)
add_subdirectory(Client)
add_subdirectory(Server)


