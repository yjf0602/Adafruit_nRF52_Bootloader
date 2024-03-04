/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2018 Ha Thach for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef GAZELLA_V1_LEFT_H
#define GAZELLA_V1_LEFT_H

#define _PINNUM(port, pin)    ((port)*32 + (pin))

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER             3

#define LED_PRIMARY_PIN         _PINNUM(0, 24)
#define LED_SECONDARY_PIN  	    _PINNUM(0, 9)
#define LED_TERTIARY_PIN  	    _PINNUM(0, 10)

#define LED_STATE_ON            0

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
#define BUTTONS_NUMBER          2

#define BUTTON_1                _PINNUM(0, 0) /// ROW4, COL6, 'F'
#define BUTTON_2                _PINNUM(0, 7) /// UNUSED PIN
#define BUTTON_PULL             NRF_GPIO_PIN_PULLDOWN

#define KEYBAORD_COL6_PIN       _PINNUM(1, 13)

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER     "GAZELLA"
#define BLEDIS_MODEL            "GAZELLA_V1_LEFT"

//--------------------------------------------------------------------+
// USB
//--------------------------------------------------------------------+

// Shared VID/PID with Feather nRF52840, will be disabled for building in the future
#define USB_DESC_VID            0x239A
#define USB_DESC_UF2_PID        0x0029
#define USB_DESC_CDC_ONLY_PID   0x0029

#define UF2_PRODUCT_NAME        "GAZELLA-V1-LEFT"
#define UF2_BOARD_ID            "GAZELLA-V1-LEFT"
#define UF2_INDEX_URL           "https://www.nordicsemi.com/Software-and-Tools/Development-Kits/nRF52840-Dongle"

#endif // GAZELLA_V1_LEFT_H
