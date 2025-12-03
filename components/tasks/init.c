
/* System lib*/
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"
#include "driver/gpio.h"
#include "driver/gptimer.h"
#include "driver/ledc.h"
#include "esp_log.h"

/* own lib */

#include "init.h" 

static const char * TAG = "INIT";
static const char * SPI = "SPI";
static const char * I2C = "I2C";


