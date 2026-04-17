#ifndef SSD1306_H
#define SSD1306_H

#include <stdint.h>
#include "driver/i2c_master.h"

// SSD1306 I2C地址
#define SSD1306_I2C_ADDR 0x3C

// SSD1306 命令
#define SSD1306_CMD_DISPLAY_OFF 0xAE
#define SSD1306_CMD_DISPLAY_ON 0xAF
#define SSD1306_CMD_SET_MEMORY_ADDRESSING_MODE 0x20
#define SSD1306_CMD_SET_COLUMN_ADDRESS 0x21
#define SSD1306_CMD_SET_PAGE_ADDRESS 0x22
#define SSD1306_CMD_SET_START_LINE 0x40
#define SSD1306_CMD_SET_CONTRAST 0x81
#define SSD1306_CMD_SET_SEGMENT_REMAP 0xA0
#define SSD1306_CMD_SET_SEGMENT_REMAP_REVERSE 0xA1
#define SSD1306_CMD_SET_NORMAL_DISPLAY 0xA6
#define SSD1306_CMD_SET_INVERSE_DISPLAY 0xA7
#define SSD1306_CMD_SET_MULTIPLEX_RATIO 0xA8
#define SSD1306_CMD_SET_DISPLAY_OFFSET 0xD3
#define SSD1306_CMD_SET_COM_SCAN_DIRECTION 0xC0
#define SSD1306_CMD_SET_COM_SCAN_DIRECTION_REVERSE 0xC8
#define SSD1306_CMD_SET_DISPLAY_CLOCK_DIVIDE 0xD5
#define SSD1306_CMD_SET_PRECHARGE_PERIOD 0xD9
#define SSD1306_CMD_SET_VCOMH_DESELECT_LEVEL 0xDB
#define SSD1306_CMD_SET_CHARGE_PUMP 0x8D

// SSD1306 尺寸
#define SSD1306_WIDTH 128
#define SSD1306_HEIGHT 64

// 函数声明
esp_err_t ssd1306_init(i2c_port_t i2c_num, uint8_t sda_pin, uint8_t scl_pin);
esp_err_t ssd1306_send_command(uint8_t cmd);
esp_err_t ssd1306_send_data(uint8_t* data, size_t len);
esp_err_t ssd1306_clear_screen(void);
esp_err_t ssd1306_draw_pixel(uint8_t x, uint8_t y, uint8_t color);
esp_err_t ssd1306_update_screen(void);
esp_err_t ssd1306_draw_string(uint8_t x, uint8_t y, const char* str, uint8_t size);
esp_err_t ssd1306_deinit(void);

#endif // SSD1306_H