#include "./Drivers/LED_Driver/led.h"
#include <stdio.h>
#include "pico/stdlib.h"

int main() {
    // Define LED pins
    const uint red_led = 15;
    const uint green_led = 16;
    const uint yellow_led = 22; 

    // Initialize LED pins
    init_led(red_led);
    init_led(green_led);
    init_led(yellow_led);
    ///////////////////////////////////////

    // Initialize chosen serial port
    stdio_init_all();

    //delay for 5s 
    sleep_ms(5000);

    // Loop forever
    while (true) {
        // blink red led for 1 second
       blink_led(red_led);

        // blink green led for 1 second
        blink_led(green_led);

        // blink yellow led for 1 second
        blink_led(yellow_led);

        //turn on all leds together for 2 seconds
        blink_all_leds(red_led, green_led, yellow_led);
    }
}