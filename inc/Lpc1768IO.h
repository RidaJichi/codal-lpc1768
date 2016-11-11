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

#ifndef LPC1768_IO_H
#define LPC1768_IO_H

#include "mbed.h"
#include "codal_target_peripherals.h"
#include "DeviceConfig.h"
#include "DevicePin.h"

#define LPC1768_IO_PINS                26

/**
  * Class definition for Lpc1768 IO.
  *
  * Represents a collection of all I/O pins on the edge connector.
  */
class Lpc1768IO
{
    public:

    DevicePin          pin[0];
    DevicePin          P5;
    DevicePin          P6;
    DevicePin          P7;
    DevicePin          P8;
    DevicePin          P9;
    DevicePin          P10;
    DevicePin          P11;
    DevicePin          P12;
    DevicePin          P13;
    DevicePin          P14;
    DevicePin          P15;
    DevicePin          P16;
    DevicePin          P17;
    DevicePin          P18;
    DevicePin          P19;
    DevicePin          P20;
    DevicePin          P21;
    DevicePin          P22;
    DevicePin          P23;
    DevicePin          P24;
    DevicePin          P25;
    DevicePin          P26;
    DevicePin          P27;
    DevicePin          P28;
    DevicePin          P29;
    DevicePin          P30;

    /**
      * Constructor.
      *
      * Create a representation of all given I/O pins on the edge connector
      *
      * Accepts a sequence of unique ID's used to distinguish events raised
      * by Lpc1768Pin instances on the default EventModel.
      */
    Lpc1768IO();
};

#endif
