

#include "KX134.h"
#include "mbed.h"

#define PIN_I2C_SDA PF_0
#define PIN_I2C_SCL PF_1

int main(void)
{
    KX134 kx134Obj(PIN_I2C_SDA, PIN_I2C_SCL);
    kx134Obj.init();
}
