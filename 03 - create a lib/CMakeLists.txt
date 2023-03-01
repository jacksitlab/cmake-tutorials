cmake_minimum_required(VERSION 3.10.2) 

project(mylib)


# add_library
# first arg is name of the lib
# all following args are source files
add_library(${PROJECT_NAME}
  "mylib.c"
)

set_target_properties(${PROJECT_NAME} PROPERTIES PUBLIC_HEADER mylib.h)
install(TARGETS ${PROJECT_NAME} LIBRARY DESTINATION lib
    PUBLIC_HEADER DESTINATION include)