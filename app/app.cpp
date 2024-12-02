#include <main.h>

#include "app/app.hpp"

void entrypoint() {
  while (true) {
    HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
    HAL_Delay(200);
  }
}