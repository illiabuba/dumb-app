#Parent Cmakelist
# way to build this project
# cmake -S . -B build-files

# for building run command: cmake -S PATH -B PATH /
# Where -S is source and -B build /
# for now -S is in src folder, build is in build-env /

cmake_minimum_required(VERSION 3.10)

# set the project name
project(MyApp VERSION 1.0)

add_subdirectory(src/Client)
add_subdirectory(src/Server)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add the executable
add_executable(${PROJECT_NAME} src/Client/client.cpp src/Server/server.cpp) 