cmake_minimum_required(VERSION 2.6)
project(sandbox-cppcms)
if (NOT DEFINED CMAKE_PREFIX_PATH)
    set(CMAKE_PREFIX_PATH ${CMAKE_SOURCE_DIR}/usr)
endif (NOT DEFINED CMAKE_PREFIX_PATH)
file(GLOB SRC
        src/*.cpp
        src/dao/*.cpp
        src/rest/*.cpp
)
find_package(Threads)
add_executable(sandbox-cppcms ${SRC})
include_directories(
        ${CMAKE_PREFIX_PATH}/include
        /usr/local/include
        /usr/include
        ${CMAKE_SOURCE_DIR}/include
)
target_link_libraries(sandbox-cppcms
        dl
        ${CMAKE_THREAD_LIBS_INIT}
        pcre
        ${CMAKE_PREFIX_PATH}/lib/libbooster.so
        ${CMAKE_PREFIX_PATH}/lib/libcppcms.so
        ${CMAKE_PREFIX_PATH}/lib/libhiberlite.a
)
enable_testing()
file(GLOB TEST
        test/*.cpp
)
set(GTEST_ROOT ${CMAKE_PREFIX_PATH})
find_package(GTest REQUIRED)
add_executable(sandbox-cppcms-test ${SRC} ${TEST})
include_directories(${GTEST_INCLUDE_DIRS})
target_link_libraries(sandbox-cppcms-test
        ${GTEST_LIBRARY_DEBUG}
        ${GTEST_MAIN_LIBRARY_DEBUG})
add_test(
        NAME sandbox-cppcms-test
        COMMAND sandbox-cppcms-test
)