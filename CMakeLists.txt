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