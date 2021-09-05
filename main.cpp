#include "pico/stdlib.h"
#include <stdio.h>

#define LED_BUILTIN 25

int main() {
	// initialise the built in led
	gpio_init(LED_BUILTIN);
	gpio_set_dir(LED_BUILTIN, GPIO_OUT);
	// initialise stdio to allow printing
	stdio_init_all();

	while (true) {
		// set the led to high
		gpio_put(LED_BUILTIN, 1);
		// sleep 500 ms
		sleep_ms(500);
		// print a string
		printf("Hello!\n");
		// set the led to low
		gpio_put(LED_BUILTIN, 0);
		// sleep 500 ms
		sleep_ms(500);
	}
}
