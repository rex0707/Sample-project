# Extract all cpp files as the source files
file(GLOB SRC_FILES "*.cpp")

# Set the executable name as the project name and the source files
add_executable(${CMAKE_PROJECT_NAME} ${SRC_FILES})