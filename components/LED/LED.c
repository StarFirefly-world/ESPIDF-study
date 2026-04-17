#include <stdio.h>
#include "LED.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

void led_init(void)
{
    gpio_config_t io_conf = {
        .intr_type = GPIO_INTR_DISABLE,
        .mode = GPIO_MODE_INPUT_OUTPUT,
        .pin_bit_mask = (1ULL << GPIO_NUM_38),
        .pull_down_en = GPIO_PULLDOWN_DISABLE,
        .pull_up_en = GPIO_PULLUP_ENABLE
    };
    gpio_config(&io_conf);
}


void gpio_toggle(gpio_num_t gpio_num)
{
    if(gpio_get_level(gpio_num) == 0) {
        gpio_set_level(gpio_num, 1);
    } else {
        gpio_set_level(gpio_num, 0);
    }
}