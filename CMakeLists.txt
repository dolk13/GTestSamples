cmake_minimum_required(VERSION 3.0)
project(GTestSamples)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/utils/cmake/modules")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread")

enable_testing()

find_package(GMock REQUIRED)
find_package(GTest REQUIRED)
find_package (Threads REQUIRED)

include_directories(${GMOCK_INCLUDE_DIRS})
include_directories(${GTEST_INCLUDE_DIRS})

file(GLOB SRC_FILE
    "*.h"
    "*.cpp"
)

add_executable(GTestSamples ${SRC_FILE})
target_link_libraries(GTestSamples ${CMAKE_THREAD_LIBS_INIT} ${GTEST_LIBRARIES} ${GMOCK_LIBRARIES})
