#The root CMakeLists.txt file.
cmake_minimum_required(VERSION 3.28)

set(CMAKE_TOOLCHAIN_FILE "$ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake" CACHE STRING "Vcpkg toolchain file")
    
# here we specify that the project is C language only, so the default
# C compiler on the system will be used
project(myprogram C)

add_executable(${PROJECT_NAME} main.c)