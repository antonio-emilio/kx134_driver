/**
 * @author Jasper Swallen
 * @filename KX134.h
 *
 * @section DESCRIPTION
 *
 * Software Driver for KX134-1211 accelerometer
 *
 * Datasheet:
 *
 * http://kionixfs.kionix.com/en/document/AN101-Getting-Started.pdf
 */

#ifndef KX134_H
#define KX134_H

#include "mbed.h"

class KX134
{
  public:
    KX134(PinName sda, PinName scl);
    bool init();

    I2C m_I2C;
};

#endif // KX134_H