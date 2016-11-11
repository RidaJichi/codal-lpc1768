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

#ifndef MICROBIT_MEMORY_H
#define MICROBIT_MEMORY_H

// The start address of usable RAM memory.
#ifndef DEVICE_SRAM_BASE
#define DEVICE_SRAM_BASE                      0x10000008
#endif

// Physical address of the top of SRAM.
#ifndef DEVICE_SRAM_END
#define DEVICE_SRAM_END                       0x10008000
#endif

// The end address of memory normally reserved for Soft Device.
#ifndef DEVICE_SD_LIMIT
#define DEVICE_SD_LIMIT                       0x10002000
#endif

// The physical address in memory of the Soft Device GATT table.
#ifndef DEVICE_SD_GATT_TABLE_START
#define DEVICE_SD_GATT_TABLE_START            0x10001900
#endif

// Physical address of the top of the system stack (on mbed-classic this is the top of SRAM)
#ifndef DEVICE_CPU_STACK_BASE
#define DEVICE_CPU_STACK_BASE                 DEVICE_SRAM_END
#endif

// Amount of memory reserved for the stack at the end of memory (bytes).
#ifndef DEVICE_STACK_SIZE
  #ifdef MBED_CONF_RTOS_PRESENT
  #define DEVICE_STACK_SIZE                   ISR_STACK_SIZE
  #else
  #define DEVICE_STACK_SIZE                   2048
  #endif
#endif

// Physical address of the end of mbed heap space.
#ifndef DEVICE_HEAP_END
  #ifdef MBED_CONF_RTOS_PRESENT
  #define DEVICE_HEAP_END                     (DEVICE_SRAM_END - DEVICE_STACK_SIZE)
  #else
  #define DEVICE_HEAP_END                     (DEVICE_CPU_STACK_BASE - DEVICE_STACK_SIZE)
  #endif
#endif

// The amount of memory allocated to Soft Device to hold its BLE GATT table.
// For standard S110 builds, this should be word aligned and in the range 0x300 - 0x700.
// Any unused memory will be automatically reclaimed as HEAP memory if both DEVICE_HEAP_REUSE_SD and DEVICE_HEAP_ALLOCATOR are enabled.
#ifndef DEVICE_SD_GATT_TABLE_SIZE
#define DEVICE_SD_GATT_TABLE_SIZE             0x300
#endif


#endif
