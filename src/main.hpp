#ifndef MAIN_H
#define MAIN_H

#include <PubSubClient.h>

#include "arduinoC.hpp"
#include "Config/config.hpp"
#include "debugSerial.hpp"
#include "X10A/converters.hpp"
#include "X10A/comm.hpp"
#include "X10A/x10a.hpp"
#include "MQTT/mqtt.hpp"
#include "WebUI/webui.hpp"
#include "wireless.hpp"
#include "persistence.hpp"
#include "CAN/canBus.hpp"
#include "arrayFunctions.hpp"
#include "restart.hpp"

void IRAM_ATTR restartInStandaloneWifi();

void setup();

void waitLoop(ulong ms);

void loop();
#endif