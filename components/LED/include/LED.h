#ifndef LED_H
#define LED_H
#include <stdio.h>
#include "driver/gpio.h"

void led_init(void);
void gpio_toggle(gpio_num_t gpio_num);

#endif /* LED_H */