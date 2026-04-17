idf_component_register(SRCS "SSD1306.c"
                    INCLUDE_DIRS "include"
                    REQUIRES esp_driver_i2c esp_hal_i2c
)
