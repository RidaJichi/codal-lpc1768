# NXP LPC1768

A collection of the commonly used components of the CODAL runtime with a
basic configuration, to provide an easy to use interface for programming an LPC1768 development board in C/C++.

## Overview

The CODAL runtime provides an easy to use environment for programming the BBC micro:bit in the C/C++ language, written by Lancaster University. It contains device drivers for all the hardware capabilities of the micro:bit, and also a suite of runtime mechanisms to make programming the micro:bit easier and more flexible. These range from control of the LED matrix display to peer-to-peer radio communication and secure Bluetooth Low Energy services. The micro:bit runtime is proudly built on the ARM mbed and Nordic nrf51 platforms.

In addition to supporting development in C/C++, the runtime is also designed specifically to support higher level languages provided by our partners that target the micro:bit. It is currently used as a support library for all the languages on the BBC www.microbit.co.uk website, including Microsoft Block, Microsoft TouchDevelop, Code Kingdoms JavaScript and Micropython languages.

## Links

[micro:bit runtime docs](http://lancaster-university.github.io/microbit-docs/) | [microbit-dal](https://github.com/lancaster-university/microbit-dal) |  [samples](https://github.com/lancaster-university/microbit-samples)

## Build Environments

| Build Environment | Documentation |
| ------------- |-------------|
| ARM mbed online | http://lancaster-university.github.io/microbit-docs/online-toolchains/#mbed |
| yotta  | http://lancaster-university.github.io/microbit-docs/offline-toolchains/#yotta |



## Hello World!

```cpp
#include "Lpc1768.h"

Lpc1768 lpc1768;

int main()
{
    lpc1768.init();

    lpc1768.display.scroll("Hello world!");
}
```

