#include "esp_common.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void main_task(void *pvParameters) {
    init();
    setup();
    for (;;) {
        loop();
    }
}

void ICACHE_FLASH_ATTR user_init(void) {
    xTaskCreate(main_task, (const signed char*)"loop", 256, NULL, 2, NULL);
}

