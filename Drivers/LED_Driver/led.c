#include <stdio.h>
#include "pico/stdlib.h"
#include "led.h"

void init_led(unsigned int led) {
    gpio_init(led);
    gpio_set_dir(led, GPIO_OUT);
}

void turn_on_led(unsigned int led) {
    gpio_put(led, true);
}

void turn_off_led(unsigned int led) {
    gpio_put(led, false);
}

void turn_on_all_leds(unsigned int led_1, unsigned int led_2, unsigned int led_3) {
    turn_on_led(led_1);
    turn_on_led(led_2);
    turn_on_led(led_3);
}

void turn_off_all_leds(unsigned int led_1, unsigned int led_2, unsigned int led_3) {
    turn_off_led(led_1);
    turn_off_led(led_2);
    turn_off_led(led_3);
}

void blink_led(unsigned int led) {
    turn_on_led(led);
    sleep_ms(1000);
    turn_off_led(led);
    sleep_ms(1000);
}


void blink_all_leds(unsigned int led_1, unsigned int led_2, unsigned int led_3) {
    turn_on_all_leds(led_1, led_2, led_3);
    sleep_ms(2000);
    turn_off_all_leds(led_1, led_2, led_3);
    sleep_ms(2000);
}