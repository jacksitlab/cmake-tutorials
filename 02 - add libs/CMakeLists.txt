cmake_minimum_required(VERSION 3.10.2) 

project(inc_lib_test)
# add_executable
# first arg is name of the bin
# all following args are source files
add_executable(${PROJECT_NAME}
  "main.c"
)

target_link_directories(${PROJECT_NAME} PRIVATE /usr/lib/x86_64-linux-gnu)
target_link_libraries(${PROJECT_NAME} curl)
