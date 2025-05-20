cmake_minimum_required(VERSION 3.19)

project("Hackerank Solution")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(GTest REQUIRED)

add_executable(sorting_test "prepare/algorithm/sorting.cpp" "prepare/algorithm/sorting_test.cpp")
target_link_libraries(sorting_test GTest::GTest GTest::Main)