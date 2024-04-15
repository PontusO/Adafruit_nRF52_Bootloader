/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2018 Ha Thach for Adafruit Industries, 2022 Invector Labs
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

#ifndef _CONNECTIVITY_840_LTE_H
#define _CONNECTIVITY_840_LTE_H

#define _PINNUM(port, pin)    ((port)*32 + (pin))

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER           1
#define LED_PRIMARY_PIN       _PINNUM(0, 27)
#define LED_STATE_ON          1

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
#define BUTTONS_NUMBER        2
#define BUTTON_1              _PINNUM(1, 3)
#define BUTTON_2              _PINNUM(0, 0)  // Pulls flash cs high
#define BUTTON_PULL           NRF_GPIO_PIN_PULLUP

/*------------------------------------------------------------------*/
/* On board LDO control
 *------------------------------------------------------------------*/
#define LORA_POWER_ENABLE     _PINNUM(1, 7)  // Enables external pwr

/*------------------------------------------------------------------*/
/* On board LDO control
 *------------------------------------------------------------------*/
#define NBIOT_POWER_ENABLE    _PINNUM(1, 2)  // Enables external pwr

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER   "Invector Labs"
#define BLEDIS_MODEL          "Connectivity 840/LTE"

//--------------------------------------------------------------------+
// USB
//--------------------------------------------------------------------+
#define USB_DESC_VID           0x1209
#define USB_DESC_UF2_PID       0x7383
#define USB_DESC_CDC_ONLY_PID  0x7384

//------------- UF2 -------------//
#define UF2_PRODUCT_NAME      "ILabs Connectivity 840/LTE"
#define UF2_VOLUME_LABEL      "IL840BOOT"
#define UF2_BOARD_ID          "nRF52840-Connectivity-840/LTE"
#define UF2_INDEX_URL         "https://www.ilabs.se"

#endif // _CONNECTIVITY_840_LTE_H
