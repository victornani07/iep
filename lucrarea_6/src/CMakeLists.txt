add_library(
    lab
    ./Item13/hospital.hpp
    ./Item13/hospital.cpp
    ./Item13/database.hpp
    ./Item13/database.cpp
    ./Item13/creditcard.hpp
    ./Item13/creditcard.cpp
    ./Item14/lock.hpp
    ./Item14/lock.cpp
)

target_include_directories(lab 
    PUBLIC 
    "${CMAKE_CURRENT_SOURCE_DIR}/Item13"
)