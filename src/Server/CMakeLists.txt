#Building SERVER 

cmake_minimum_required(VERSION 3.10)

# set the project name
project(AppServer)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(${PROJECT_NAME} server.cpp)

target_include_directories(${PROJECT_NAME}
        PUBLIC
            Networking
)

target_link_libraries(${PROJECT_NAME}
        PUBLIC
            Networking
)