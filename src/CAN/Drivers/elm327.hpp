#ifndef DRIVER_ELM327_H
#define DRIVER_ELM327_H

#include "arduinoC.hpp"
#include "CAN/driver.hpp"
#include "Config/config.hpp"
#include "debugSerial.hpp"
#ifndef NO_BLUETOOTH
#include <BluetoothSerial.h>
#endif

#define ELM327_SERIAL_SPEED 38400

class DriverELM327 : public CANDriver
{
private:
    bool write(const char *bytes, size_t size);
    bool setID(const uint16_t id);
    bool setMode(CanDriverMode mode);
    bool ATCommandIsOK();
    bool listenOnly;
    bool deleteNeeded = false;
    String received = "";
    Stream* Elm327Serial;

public:
    DriverELM327(const CAN_Config* CANConfig);
    bool initInterface();
    void handleLoop();
    void sendCommand(CANCommand* cmd, bool setValue = false, int value = 0);
    ~DriverELM327();
};

#endif