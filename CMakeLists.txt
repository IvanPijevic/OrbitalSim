cmake_minimum_required(VERSION 3.16)
project(OrbitalSim CXX)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_TOOLCHAIN_FILE "C:/vcpkg/scripts/buildsystems/vcpkg.cmake")

find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

add_executable(OrbitalSim src/main.cpp)

target_include_directories(OrbitalSim PRIVATE include)
target_link_libraries(OrbitalSim sfml-graphics sfml-window sfml-system)