cmake_minimum_required(VERSION 3.10)

project(milk C)

find_package(raylib REQUIRED)

set(SOURCE_FILES
    src/main.c
    src/tracking.c
)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

target_link_libraries(${PROJECT_NAME} PRIVATE raylib)
target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -g)
