#include <stdio.h>

#include "pico/stdlib.h"

int main( void )
{
    // Initialise the debug output
    stdio_init_all();
    // Wait for the stdio to initialise
    sleep_ms( 800U );

    printf("Running\n");

    for( ;; ) {}
}
