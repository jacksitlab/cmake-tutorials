cmake_minimum_required(VERSION 3.10.2) 

project(simple_test)
# add_executable
# first arg is name of the bin
# all following args are source files
add_executable(${PROJECT_NAME}
  "main.c"
)

# install
# args:
#   * TARGETS ... fixed?
#   * ${PROJECT_NAME} ... executable to install
#   * DESTINATION .... fixed
#   * bin ... in Linux /usr/local/bin
install(TARGETS ${PROJECT_NAME} DESTINATION bin)