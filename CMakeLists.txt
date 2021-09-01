# You can change this if you use a file with a different name
set(FILENAME main)
# You can change this if you change from cpp to something else
set(EXTENSION cpp)
# You can enable or disable serial communication here
set(USB 1)

# --- Here's the complex stuff, have fun with this :D --- 

# Specify the minimum version of cmake
cmake_minimum_required(VERSION 3.12)
# Tell cmake to use the c/c++ SDK designed for pico
include(pico_sdk_import.cmake)
# No idea what's going on here lol
project(${FILENAME} C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
# Don't know why it needs examples but if it aint broke
set(PICO_EXAMPLES_PATH ${PROJECT_SOURCE_DIR})
# Initialise the c/c++ SDK for pico
pico_sdk_init()
# More stuff I don't understand (:
add_executable(${FILENAME} ${FILENAME}.${EXTENSION})
# Combine the c libraries with the pico library
target_link_libraries(${FILENAME} pico_stdlib)
# This line causes the map/bin/hex binaries to be produced
pico_add_extra_outputs(${FILENAME})
# Enable usb serial communication so the pico can print to the computer
pico_enable_stdio_usb(${FILENAME} ${USB})
# I didn't use pico_enable_stdio_uart(${FILENAME} ${USB})
