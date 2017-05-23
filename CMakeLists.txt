cmake_minimum_required(VERSION 2.6)
project(sandbox-cppcms)
file(GLOB SRC
        "src/*.cpp"
)
add_executable(sandbox-cppcms ${SRC})
include_directories(
        include
        /usr/local/include
)
