add_executable(${PROJECT_NAME}
    main.cpp
    # Add other cpp files here, including their directory, e.g.
    # webserver/webserver.cpp
    )

# Adding a directory here means anything within this project can include it
# Might be the wrong way to do it but I couldn't figure out the right way
target_include_directories(${PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}
    # Add the folders that are needed for compile, e.g.
    # ${CMAKE_CURRENT_LIST_DIR}/webserver
    )

target_link_libraries(${PROJECT_NAME}
    pico_stdlib
    # You'll need to link other libraries for other pico functions
    )

# Enable USB and UART for serial output
pico_enable_stdio_usb(${PROJECT_NAME} 1)  # For USB output
pico_enable_stdio_uart(${PROJECT_NAME} 0) # For picoprobe debug output

# By default make only produces a .elf, this function allows uf2 and others to be generated
pico_add_extra_outputs(${PROJECT_NAME})
