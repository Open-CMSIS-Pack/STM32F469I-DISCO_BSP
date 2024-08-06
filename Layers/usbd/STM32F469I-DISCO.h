/*---------------------------------------------------------------------------
 * Copyright (c) 2024 Arm Limited (or its affiliates).
 * All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *---------------------------------------------------------------------------*/

#ifndef STM32F469I_DISCO_H_
#define STM32F469I_DISCO_H_

#include "GPIO_STM32.h"
#include "Driver_I2C.h"
#include "Driver_SPI.h"
#include "Driver_MCI.h"
#include "Driver_USART.h"
#include "Driver_USBD.h"

// STM32F469I-DISCO (Rev.B-08) Arduino Connector Pin Defintions
#define ARDUINO_UNO_D0  GPIO_PIN_ID_PORTG(9U)  // USART6: RX
#define ARDUINO_UNO_D1  GPIO_PIN_ID_PORTG(14U) // USART6: TX
#define ARDUINO_UNO_D2  GPIO_PIN_ID_PORTG(13U)
#define ARDUINO_UNO_D3  GPIO_PIN_ID_PORTA(1U)
#define ARDUINO_UNO_D4  GPIO_PIN_ID_PORTG(12U)
#define ARDUINO_UNO_D5  GPIO_PIN_ID_PORTA(2U)
#define ARDUINO_UNO_D6  GPIO_PIN_ID_PORTA(6U)
#define ARDUINO_UNO_D7  GPIO_PIN_ID_PORTG(11U)
#define ARDUINO_UNO_D8  GPIO_PIN_ID_PORTG(10U)
#define ARDUINO_UNO_D9  GPIO_PIN_ID_PORTA(7U)
#define ARDUINO_UNO_D10 GPIO_PIN_ID_PORTH(6U)
#define ARDUINO_UNO_D11 GPIO_PIN_ID_PORTB(15U) // SPI2: MOSI
#define ARDUINO_UNO_D12 GPIO_PIN_ID_PORTB(14U) // SPI2: MISO
#define ARDUINO_UNO_D13 GPIO_PIN_ID_PORTD(3U)  // SPI2: SCK
#define ARDUINO_UNO_D14 GPIO_PIN_ID_PORTB(8U)  // I2C1: SDA
#define ARDUINO_UNO_D15 GPIO_PIN_ID_PORTB(9U)  // I2C1: SCL

// CMSIS Driver instances on Arduino connector
#define ARDUINO_UNO_I2C     1
#define ARDUINO_UNO_SPI     2
#define ARDUINO_UNO_UART    6

// CMSIS Driver instances of Board peripherals
#define CMSIS_DRIVER_MCI    1 // CMSIS-Driver MCI instance number
#define CMSIS_DRIVER_USBD   0 // CMSIS-Driver USB Device instance number

// Retarget stdio to CMSIS UART
#define RETARGET_STDIO_UART 3

// CMSIS Drivers
extern ARM_DRIVER_I2C     ARM_Driver_I2C_(ARDUINO_UNO_I2C);       // Arduino I2C
extern ARM_DRIVER_SPI     ARM_Driver_SPI_(ARDUINO_UNO_SPI);       // Arduino SPI
extern ARM_DRIVER_USART   ARM_Driver_USART_(ARDUINO_UNO_UART);    // Arduino UART
extern ARM_DRIVER_USART   ARM_Driver_USART_(RETARGET_STDIO_UART); // ST-Link
extern ARM_DRIVER_USBD    ARM_Driver_USBD_(CMSIS_DRIVER_USBD);    // USB Device

#ifdef CMSIS_shield_header
#include CMSIS_shield_header
#endif

#endif /* STM32F469I_DISCO_H_ */
