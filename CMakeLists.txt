cmake_minimum_required(VERSION 3.18)
project(CI_CS_Project)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(sum_lib
    src/sum.cpp
)
target_include_directories(sum_lib PUBLIC include)

add_executable(sum_app src/main.cpp)
target_link_libraries(sum_app PRIVATE sum_lib)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG v1.14.0
)
set(BUILD_GMOCK OFF)
set(INSTALL_GTEST OFF)

FetchContent_MakeAvailable(googletest)

add_executable(my_tests
    tests/tests.cpp
)
target_link_libraries(my_tests PRIVATE GTest::gtest_main sum_lib)

enable_testing()

add_executable(sum_tests
    tests/tests.cpp
)
target_link_libraries(sum_tests PRIVATE sum_lib GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(sum_tests)