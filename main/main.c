#include <stdio.h>
#include "LED.h"
#include "SSD1306.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void app_main(void)
{
    led_init();
    
    // 初始化SSD1306，使用I2C0，SDA引脚21，SCL引脚20
    ssd1306_init(I2C_NUM_0, 21, 20);
    
    // 清除屏幕
    ssd1306_clear_screen();
    
    // 显示文本
    ssd1306_draw_string(0, 0, "Hello ESP32!", 1);
    ssd1306_draw_string(0, 10, "SSD1306 Test", 1);
    
    // 更新屏幕显示
    ssd1306_update_screen();
    
    while (1)
    {
        /* code */
        vTaskDelay(500);
    }
    
}
