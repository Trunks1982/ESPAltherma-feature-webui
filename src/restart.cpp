#include "restart.hpp"

void restart_board()
{
  #if defined(ARDUINO_ARCH_ESP8266)
  system_restart();
  #else
  esp_restart();
  #endif
}