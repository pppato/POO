cmake_minimum_required(VERSION 3.5)

project(3_13 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(3_13 main.cpp)

include(GNUInstallDirs)
install(TARGETS 3_13
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
