cmake_minimum_required(VERSION 2.8.10)


project(SharedLinkWithStatic)
enable_language(C)

set(CMAKE_INCLUDE_CURRENT_DIR 1)

add_library(FooStatic STATIC FooStatic.c)

add_library(FooShared SHARED FooShared.c)
target_link_libraries(FooShared FooStatic)

add_executable(main Main.c)
target_link_libraries(main FooShared)
