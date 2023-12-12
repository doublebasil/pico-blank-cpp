cmake_minimum_required(VERSION 3.18)

set(PROJECT_NAME pico_w_project)
set(PICO_BOARD pico) # You may need to change this to pico_w

include(submodules/pico-sdk/external/pico_sdk_import.cmake)

project(${PROJECT_NAME} C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17) # CXX is c++

add_compile_options(-Wall -Werror) # Treat all warnings as errors

pico_sdk_init()

add_subdirectory(source)
