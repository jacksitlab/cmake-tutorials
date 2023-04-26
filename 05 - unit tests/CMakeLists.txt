cmake_minimum_required(VERSION 3.10.2) 

project(unit_tests_example)
# create lib out of all code except main
add_library(${PROJECT_NAME}lib
  "src/lib/mylib.c"
)
# create executeable with linked lib
add_executable(${PROJECT_NAME}
  "src/main.c"
)
target_include_directories(${PROJECT_NAME} PUBLIC src/)
target_link_libraries(${PROJECT_NAME} PRIVATE ${PROJECT_NAME}lib)
target_include_directories(${PROJECT_NAME}lib PUBLIC "src")
# Enable ctest
enable_testing()


# Our test program
add_executable(tests
  "tests/test01.c"
)
target_link_libraries(tests PRIVATE ${PROJECT_NAME}lib)
# Register the program with ctest
add_test(check tests)