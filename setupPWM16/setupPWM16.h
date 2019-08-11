#include <Arduino.h>

class setupPWM16
{
private:
public:
    setupPWM16();
    ~setupPWM16();
    void analogWrite16(uint8_t pin, uint16_t val);
};
