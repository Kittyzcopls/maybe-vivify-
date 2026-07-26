cmake_minimum_required(VERSION 3.22)
project(vivify)

# Set C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add source files
file(GLOB_RECURSE SRC "src/*.cpp")
file(GLOB_RECURSE HEADERS "include/*.hpp")

# Create the shared library
add_library(${PROJECT_NAME} SHARED ${SRC} ${HEADERS})

# Include directories
target_include_directories(${PROJECT_NAME} PUBLIC include)
target_include_directories(${PROJECT_NAME} PRIVATE src)

# Link with beatsaber-hook and custom-types
find_package(beatsaber-hook CONFIG REQUIRED)
find_package(custom-types CONFIG REQUIRED)

target_link_libraries(${PROJECT_NAME} PRIVATE beatsaber-hook::beatsaber-hook custom-types::custom-types)

# Set output name
set_target_properties(${PROJECT_NAME} PROPERTIES PREFIX "lib")
set_target_properties(${PROJECT_NAME} PROPERTIES SUFFIX ".so")
