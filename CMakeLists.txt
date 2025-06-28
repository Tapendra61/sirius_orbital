cmake_minimum_required(VERSION 3.31)
project(sirius_orbital)

set(CMAKE_CXX_STANDARD 26)

file(GLOB SRC_FILES "${CMAKE_SOURCE_DIR}/src/*.cpp")

add_executable(sirius_orbital ${SRC_FILES})

target_include_directories(${PROJECT_NAME} PRIVATE "${CMAKE_SOURCE_DIR}/deps/include" "${CMAKE_SOURCE_DIR}/include")
target_link_directories(${PROJECT_NAME} PRIVATE "${CMAKE_SOURCE_DIR}/deps/libs/raylib")
target_link_libraries(${PROJECT_NAME} PRIVATE raylib winmm)