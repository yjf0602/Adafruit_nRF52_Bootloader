/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2020 Pierre Constantineau
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

#ifndef _EBYTE_E104_BT5040U_H
#define _EBYTE_E104_BT5040U_H

#define _PINNUM(port, pin)    ((port)*32 + (pin))

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER           2
#define LED_PRIMARY_PIN       _PINNUM(0, 6)
#define LED_SECONDARY_PIN     _PINNUM(0, 12)
#define LED_STATE_ON          1

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
#define BUTTONS_NUMBER    2                 // one button
#define BUTTON_1          _PINNUM(1, 6)     // dfu button
#define BUTTON_2          _PINNUM(1, 10)    // no button, but can be short connected to gnd with tweezers
#define BUTTON_PULL       NRF_GPIO_PIN_PULLUP

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER  "CDEBYTE"
#define BLEDIS_MODEL         "E104-BT5040U"

//--------------------------------------------------------------------+
// USB PID from openmoko:
// Approved PR https://github.com/openmoko/openmoko-usb-oui/pull/20
//--------------------------------------------------------------------+
#define USB_DESC_VID           0x1d50
#define USB_DESC_UF2_PID       0x6160
#define USB_DESC_CDC_ONLY_PID  0x6160

#define UF2_PRODUCT_NAME  "E104_BT5040U"
#define UF2_VOLUME_LABEL  "BT5040U"
#define UF2_BOARD_ID      "E104_BT5040U"
#define UF2_INDEX_URL     "https://www.ebyte.com/product-view-news.aspx?id=1030"

#endif // _EBYTE_E104_BT5040U_H
