// tasks.c
// Required by autograder.
// Not used in this lab but must exist.

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void dummy_task(void *pvParameter)
{
    for (;;) {
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}
