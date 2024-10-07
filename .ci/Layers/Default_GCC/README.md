# Board: STMicroelectronics [STM32F469I-DISCO](https://www.st.com/en/evaluation-tools/32f469idiscovery.html)

## Default GCC Board Layer

Device: **STM32F469NIHx**

System Core Clock: **180 MHz**

This setup is configured using **STM32CubeMX**, an interactive tool provided by STMicroelectronics for device configuration.
Refer to ["Configure STM32 Devices with CubeMX"](https://github.com/Open-CMSIS-Pack/cmsis-toolbox/blob/main/docs/CubeMX.md) for additional information.

### System Configuration

| System resource       | Setting
|:----------------------|:--------------------------------------
| Heap                  | 64 kB (configured in the STM32CubeMX)
| Stack (MSP)           |  1 kB (configured in the STM32CubeMX)

### STDIO mapping

**STDIO** is routed to Virtual COM port on the ST-LINK (using **USART3** peripheral)

### CMSIS-Driver mapping

| CMSIS-Driver          | Peripheral            | Board connector/component                             | Connection
|:----------------------|:----------------------|:------------------------------------------------------|:------------------------------
| Driver_GPIO0          | GPIO                  | Arduino digital I/O pins D2..D10, D14..D19            | ARDUINO_UNO_D2..D10, D14..D19
| Driver_I2C1           | I2C1                  | Arduino I2C pins D20..D21                             | ARDUINO_UNO_I2C
| Driver_MCI0           | SDIO                  | MicroSD card connector (CN9)                          | CMSIS_MCI
| Driver_SPI2           | SPI2                  | Arduino SPI pins D10..D13                             | ARDUINO_UNO_SPI
| Driver_USART3         | USART3                | ST-LINK connector (CN1)                               | STDIN, STDOUT, STDERR
| Driver_USART6         | USART6                | Arduino UART pins D0..D1                              | ARDUINO_UNO_UART
| Driver_USBD0          | USB_OTG_FS            | User USB FS connector (CN13)                          | CMSIS_USB_Device
| CMSIS-Driver VIO      | GPIO                  | LEDs (LD3, LD1, LD4, LD2) and Wake-up button (B1)     | CMSIS_VIO

Reference to [Arduino UNO connector description](https://github.com/Open-CMSIS-Pack/cmsis-toolbox/blob/main/docs/ReferenceApplications.md#arduino-shield).

### CMSIS-Driver Virtual I/O mapping

| CMSIS-Driver VIO      | Board component
|:----------------------|:--------------------------------------
| vioBUTTON0            | Wake-up button (B2)
| vioLED0               | LED red        (LD3)
| vioLED1               | LED green      (LD1)
| vioLED2               | LED blue       (LD4)
| vioLED3               | LED orange     (LD2)
