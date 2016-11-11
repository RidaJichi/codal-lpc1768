/*
The MIT License (MIT)

Copyright (c) 2016 British Broadcasting Corporation.
This software is provided by Lancaster University by arrangement with the BBC.

Permission is hereby granted, free of charge, to any person obtaining a
copy of this software and associated documentation files (the "Software"),
to deal in the Software without restriction, including without limitation
the rights to use, copy, modify, merge, publish, distribute, sublicense,
and/or sell copies of the Software, and to permit persons to whom the
Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
DEALINGS IN THE SOFTWARE.
*/

/**
  * Class definition for Lpc1768 IO.
  *
  * Represents a collection of all I/O pins on the edge connector.
  */

#include "DeviceConfig.h"
#include "Lpc1768IO.h"

/**
  * Constructor.
  *
  * Create a representation of all given I/O pins on the edge connector
  *
  * Accepts a sequence of unique ID's used to distinguish events raised
  * by DevicePin instances on the default EventModel.
  */
Lpc1768IO::Lpc1768IO() :
    P5 (DEVICE_ID_IO_P0+5, DEVICE_PIN_P5, PIN_CAPABILITY_DIGITAL),        // SPI MOSI
    P6 (DEVICE_ID_IO_P0+6, DEVICE_PIN_P6, PIN_CAPABILITY_DIGITAL),        // SPI MISO
    P7 (DEVICE_ID_IO_P0+7, DEVICE_PIN_P7, PIN_CAPABILITY_DIGITAL),        // SPI SCK
    P8 (DEVICE_ID_IO_P0+8, DEVICE_PIN_P8, PIN_CAPABILITY_DIGITAL),
    P9 (DEVICE_ID_IO_P0+9, DEVICE_PIN_P9, PIN_CAPABILITY_DIGITAL),        // SERIAL TX / I2C SDA
    P10(DEVICE_ID_IO_P0+10,DEVICE_PIN_P10,PIN_CAPABILITY_DIGITAL),        // SERIAL RX / I2C SCL
    P11(DEVICE_ID_IO_P0+11,DEVICE_PIN_P11,PIN_CAPABILITY_DIGITAL),        // SPI MOSI
    P12(DEVICE_ID_IO_P0+12,DEVICE_PIN_P12,PIN_CAPABILITY_DIGITAL),        // SPI MISO
    P13(DEVICE_ID_IO_P0+13,DEVICE_PIN_P13,PIN_CAPABILITY_DIGITAL),        // SPI SCK / SERIAL TX
    P14(DEVICE_ID_IO_P0+14,DEVICE_PIN_P14,PIN_CAPABILITY_DIGITAL),        // SERIAL RX
    P15(DEVICE_ID_IO_P0+15,DEVICE_PIN_P15,PIN_CAPABILITY_ANALOG),         // ANALOG IN
    P16(DEVICE_ID_IO_P0+16,DEVICE_PIN_P16,PIN_CAPABILITY_ANALOG),         // ANALOG IN
    P17(DEVICE_ID_IO_P0+17,DEVICE_PIN_P17,PIN_CAPABILITY_ANALOG),         // ANALOG IN
    P18(DEVICE_ID_IO_P0+18,DEVICE_PIN_P18,PIN_CAPABILITY_ANALOG),         // ANALOG IN / ANALOG OUT
    P19(DEVICE_ID_IO_P0+19,DEVICE_PIN_P19,PIN_CAPABILITY_ANALOG),         // ANALOG IN
    P20(DEVICE_ID_IO_P0+20,DEVICE_PIN_P20,PIN_CAPABILITY_ANALOG),         // ANALOG IN
    P21(DEVICE_ID_IO_P0+21,DEVICE_PIN_P21,PIN_CAPABILITY_DIGITAL),        // PWM OUT
    P22(DEVICE_ID_IO_P0+22,DEVICE_PIN_P22,PIN_CAPABILITY_DIGITAL),        // PWM OUT
    P23(DEVICE_ID_IO_P0+23,DEVICE_PIN_P23,PIN_CAPABILITY_DIGITAL),        // PWM OUT
    P24(DEVICE_ID_IO_P0+24,DEVICE_PIN_P24,PIN_CAPABILITY_DIGITAL),        // PWM OUT
    P25(DEVICE_ID_IO_P0+25,DEVICE_PIN_P25,PIN_CAPABILITY_DIGITAL),        // PWM OUT
    P26(DEVICE_ID_IO_P0+26,DEVICE_PIN_P26,PIN_CAPABILITY_DIGITAL),        // PWM OUT
    P27(DEVICE_ID_IO_P0+27,DEVICE_PIN_P27,PIN_CAPABILITY_DIGITAL),        // SERIAL RX / I2C SCL
    P28(DEVICE_ID_IO_P0+28,DEVICE_PIN_P28,PIN_CAPABILITY_DIGITAL),        // SERIAL TX / I2C SDA
    P29(DEVICE_ID_IO_P0+29,DEVICE_PIN_P29,PIN_CAPABILITY_DIGITAL),        // CAN TD
    P30(DEVICE_ID_IO_P0+30,DEVICE_PIN_P30,PIN_CAPABILITY_DIGITAL)         // CAN RD
{
}
