cmake_minimum_required(VERSION 3.29)
project(diylib)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 20)

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# Add the executable and specify the source files
add_executable(
        diylib_executable
        Src/Sorting/mergeSort.cpp
        include/Sorting/Sortings.hpp
        include/Sorting/Sorting.tpp
        # Add other source files as needed
)

