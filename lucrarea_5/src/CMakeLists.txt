add_library(
    src
    ./Item10/tuple.hpp
    ./Item10/tuple.cpp
    ./Item11/complex.hpp
    ./Item11/complex.cpp
    ./Item11/operation.hpp
    ./Item11/operation.cpp
    ./Item12/planepoint.hpp
    ./Item12/planepoint.cpp
    ./Item12/spacepoint.hpp
    ./Item12/spacepoint.cpp
)

target_include_directories(src
    PUBLIC 
    "${CMAKE_CURRENT_SOURCE_DIR}/Item10")
