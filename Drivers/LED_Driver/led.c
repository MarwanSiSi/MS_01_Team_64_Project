#include <stdio.h>
#include "pico/stdlib.h"
#include "led.h"

// initialize the led and set it as output
void init_led(unsigned int led) {
    gpio_init(led);
    gpio_set_dir(led, GPIO_OUT);
}

// turn on the led
void turn_on_led(unsigned int led) {
    gpio_put(led, true);
}

// turn off the led
void turn_off_led(unsigned int led) {
    gpio_put(led, false);
}

// turn on all leds
void turn_on_all_leds(unsigned int led_1, unsigned int led_2, unsigned int led_3) {
    turn_on_led(led_1);
    turn_on_led(led_2);
    turn_on_led(led_3);
}

// turn off all leds
void turn_off_all_leds(unsigned int led_1, unsigned int led_2, unsigned int led_3) {
    turn_off_led(led_1);
    turn_off_led(led_2);
    turn_off_led(led_3);
}

// blink a led
void blink_led(unsigned int led) {
    turn_on_led(led);
    sleep_ms(1000);
    turn_off_led(led);
    sleep_ms(1000);
}

// blink all leds
void blink_all_leds(unsigned int led_1, unsigned int led_2, unsigned int led_3) {
    turn_on_all_leds(led_1, led_2, led_3);
    sleep_ms(2000);
    turn_off_all_leds(led_1, led_2, led_3);
    sleep_ms(2000);
}