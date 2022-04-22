cmake_minimum_required(VERSION 3.0.0)
project(Sample-project VERSION 0.1.0)

# Set the directory to put all the RUNTIME target files, ex: executable files
SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

# Set the include directory
include_directories(include)

# Add the source directory
add_subdirectory(source)