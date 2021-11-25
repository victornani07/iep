# CMake version
cmake_minimum_required(VERSION 3.20.0)

# Assigning the name of the project which I have chosen "iep_project" to a variable called "project_name"
set(project_name "iep_project")

# Giving the name which I have chosen to the project
project(${project_name})  

# Define the executable
add_subdirectory(src)

add_executable(${PROJECT_NAME} 
                main.cpp)

target_link_libraries(${PROJECT_NAME} lab)