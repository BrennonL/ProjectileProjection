cmake_minimum_required(VERSION 3.10)
project(satellite)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# include_directories(include)

find_package(Eigen3 3.3 REQUIRED NO_MODULE)
find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)

add_executable(
    satellite
    main.cpp
    src/glad.c
)
    
target_include_directories(
    satellite 
    PRIVATE 
    ${CMAKE_SOURCE_DIR}/include
)

# target_link_libraries(satellite Eigen3:Eigen)
target_link_libraries(satellite PRIVATE OpenGL::GL glfw Eigen3::Eigen)