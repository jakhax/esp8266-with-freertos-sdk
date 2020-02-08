
#include <stdlib.h>
#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#define LED2 2

void setup()
{   
    // configure gpio direction to output only
    gpio_set_direction(LED2,GPIO_MODE_OUTPUT);
}

void loop()
{
    vTaskDelay(1000/portTICK_PERIOD_MS);
    gpio_set_level(LED2,1);
    vTaskDelay(1000/portTICK_PERIOD_MS);
    gpio_set_level(LED2,0);
}

void app_main(void)
{
  setup();
  while (1)
  {
    loop();
  }
}
