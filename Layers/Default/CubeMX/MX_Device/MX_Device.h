/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 02/10/2024 20:40:17
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated with a generator out of the
 *               STM32CubeMX project and its generated files (DO NOT EDIT!)
 ******************************************************************************/

#ifndef MX_DEVICE_H__
#define MX_DEVICE_H__

/* MX_Device.h version */
#define MX_DEVICE_VERSION                       0x01000000


/*------------------------------ I2C1           -----------------------------*/
#define MX_I2C1                                 1

/* Peripheral Clock Frequency */
#define MX_I2C1_PERIPH_CLOCK_FREQ               45000000

/* Pins */

/* I2C1_SCL */
#define MX_I2C1_SCL_Pin                         PB8
#define MX_I2C1_SCL_GPIO_Pin                    GPIO_PIN_8
#define MX_I2C1_SCL_GPIOx                       GPIOB
#define MX_I2C1_SCL_GPIO_Mode                   GPIO_MODE_AF_OD
#define MX_I2C1_SCL_GPIO_PuPd                   GPIO_PULLUP
#define MX_I2C1_SCL_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_I2C1_SCL_GPIO_AF                     GPIO_AF4_I2C1

/* I2C1_SDA */
#define MX_I2C1_SDA_Pin                         PB9
#define MX_I2C1_SDA_GPIO_Pin                    GPIO_PIN_9
#define MX_I2C1_SDA_GPIOx                       GPIOB
#define MX_I2C1_SDA_GPIO_Mode                   GPIO_MODE_AF_OD
#define MX_I2C1_SDA_GPIO_PuPd                   GPIO_PULLUP
#define MX_I2C1_SDA_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_I2C1_SDA_GPIO_AF                     GPIO_AF4_I2C1

/*------------------------------ I2C2           -----------------------------*/
#define MX_I2C2                                 1

/* Pins */

/* I2C2_SCL */
#define MX_I2C2_SCL_Pin                         PH4
#define MX_I2C2_SCL_GPIO_Pin                    GPIO_PIN_4
#define MX_I2C2_SCL_GPIOx                       GPIOH
#define MX_I2C2_SCL_GPIO_Mode                   GPIO_MODE_AF_OD
#define MX_I2C2_SCL_GPIO_PuPd                   GPIO_PULLUP
#define MX_I2C2_SCL_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_I2C2_SCL_GPIO_AF                     GPIO_AF4_I2C2

/* I2C2_SDA */
#define MX_I2C2_SDA_Pin                         PH5
#define MX_I2C2_SDA_GPIO_Pin                    GPIO_PIN_5
#define MX_I2C2_SDA_GPIOx                       GPIOH
#define MX_I2C2_SDA_GPIO_Mode                   GPIO_MODE_AF_OD
#define MX_I2C2_SDA_GPIO_PuPd                   GPIO_PULLUP
#define MX_I2C2_SDA_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_I2C2_SDA_GPIO_AF                     GPIO_AF4_I2C2

/*------------------------------ SDIO           -----------------------------*/
#define MX_SDIO                                 1

/* Mode */
#define MX_SDIO_MODE_SD                         1

/* Peripheral Clock Frequency */
#define MX_SDIO_PERIPH_CLOCK_FREQ               48000000

/* Pins */

/* SDIO_CK */
#define MX_SDIO_CK_Pin                          PC12
#define MX_SDIO_CK_GPIO_Pin                     GPIO_PIN_12
#define MX_SDIO_CK_GPIOx                        GPIOC
#define MX_SDIO_CK_GPIO_Mode                    GPIO_MODE_AF_PP
#define MX_SDIO_CK_GPIO_PuPd                    GPIO_NOPULL
#define MX_SDIO_CK_GPIO_Speed                   GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDIO_CK_GPIO_AF                      GPIO_AF12_SDIO

/* SDIO_CMD */
#define MX_SDIO_CMD_Pin                         PD2
#define MX_SDIO_CMD_GPIO_Pin                    GPIO_PIN_2
#define MX_SDIO_CMD_GPIOx                       GPIOD
#define MX_SDIO_CMD_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_SDIO_CMD_GPIO_PuPd                   GPIO_NOPULL
#define MX_SDIO_CMD_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDIO_CMD_GPIO_AF                     GPIO_AF12_SDIO

/* SDIO_D0 */
#define MX_SDIO_D0_Pin                          PC8
#define MX_SDIO_D0_GPIO_Pin                     GPIO_PIN_8
#define MX_SDIO_D0_GPIOx                        GPIOC
#define MX_SDIO_D0_GPIO_Mode                    GPIO_MODE_AF_PP
#define MX_SDIO_D0_GPIO_PuPd                    GPIO_NOPULL
#define MX_SDIO_D0_GPIO_Speed                   GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDIO_D0_GPIO_AF                      GPIO_AF12_SDIO

/* SDIO_D1 */
#define MX_SDIO_D1_Pin                          PC9
#define MX_SDIO_D1_GPIO_Pin                     GPIO_PIN_9
#define MX_SDIO_D1_GPIOx                        GPIOC
#define MX_SDIO_D1_GPIO_Mode                    GPIO_MODE_AF_PP
#define MX_SDIO_D1_GPIO_PuPd                    GPIO_NOPULL
#define MX_SDIO_D1_GPIO_Speed                   GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDIO_D1_GPIO_AF                      GPIO_AF12_SDIO

/* SDIO_D2 */
#define MX_SDIO_D2_Pin                          PC10
#define MX_SDIO_D2_GPIO_Pin                     GPIO_PIN_10
#define MX_SDIO_D2_GPIOx                        GPIOC
#define MX_SDIO_D2_GPIO_Mode                    GPIO_MODE_AF_PP
#define MX_SDIO_D2_GPIO_PuPd                    GPIO_NOPULL
#define MX_SDIO_D2_GPIO_Speed                   GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDIO_D2_GPIO_AF                      GPIO_AF12_SDIO

/* SDIO_D3 */
#define MX_SDIO_D3_Pin                          PC11
#define MX_SDIO_D3_GPIO_Pin                     GPIO_PIN_11
#define MX_SDIO_D3_GPIOx                        GPIOC
#define MX_SDIO_D3_GPIO_Mode                    GPIO_MODE_AF_PP
#define MX_SDIO_D3_GPIO_PuPd                    GPIO_NOPULL
#define MX_SDIO_D3_GPIO_Speed                   GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDIO_D3_GPIO_AF                      GPIO_AF12_SDIO

/*------------------------------ SPI2           -----------------------------*/
#define MX_SPI2                                 1

/* Peripheral Clock Frequency */
#define MX_SPI2_PERIPH_CLOCK_FREQ               45000000

/* Pins */

/* SPI2_MISO */
#define MX_SPI2_MISO_Pin                        PC2
#define MX_SPI2_MISO_GPIO_Pin                   GPIO_PIN_2
#define MX_SPI2_MISO_GPIOx                      GPIOC
#define MX_SPI2_MISO_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SPI2_MISO_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI2_MISO_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI2_MISO_GPIO_AF                    GPIO_AF5_SPI2

/* SPI2_MOSI */
#define MX_SPI2_MOSI_Pin                        PC3
#define MX_SPI2_MOSI_GPIO_Pin                   GPIO_PIN_3
#define MX_SPI2_MOSI_GPIOx                      GPIOC
#define MX_SPI2_MOSI_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SPI2_MOSI_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI2_MOSI_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI2_MOSI_GPIO_AF                    GPIO_AF5_SPI2

/* SPI2_SCK */
#define MX_SPI2_SCK_Pin                         PD3
#define MX_SPI2_SCK_GPIO_Pin                    GPIO_PIN_3
#define MX_SPI2_SCK_GPIOx                       GPIOD
#define MX_SPI2_SCK_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_SPI2_SCK_GPIO_PuPd                   GPIO_NOPULL
#define MX_SPI2_SCK_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI2_SCK_GPIO_AF                     GPIO_AF5_SPI2

/*------------------------------ USART3         -----------------------------*/
#define MX_USART3                               1

/* Virtual mode */
#define MX_USART3_VM                            VM_ASYNC
#define MX_USART3_VM_ASYNC                      1

/* Pins */

/* USART3_RX */
#define MX_USART3_RX_Pin                        PB11
#define MX_USART3_RX_GPIO_Pin                   GPIO_PIN_11
#define MX_USART3_RX_GPIOx                      GPIOB
#define MX_USART3_RX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_USART3_RX_GPIO_PuPd                  GPIO_PULLUP
#define MX_USART3_RX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART3_RX_GPIO_AF                    GPIO_AF7_USART3

/* USART3_TX */
#define MX_USART3_TX_Pin                        PB10
#define MX_USART3_TX_GPIO_Pin                   GPIO_PIN_10
#define MX_USART3_TX_GPIOx                      GPIOB
#define MX_USART3_TX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_USART3_TX_GPIO_PuPd                  GPIO_PULLUP
#define MX_USART3_TX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART3_TX_GPIO_AF                    GPIO_AF7_USART3

/*------------------------------ USART6         -----------------------------*/
#define MX_USART6                               1

/* Virtual mode */
#define MX_USART6_VM                            VM_ASYNC
#define MX_USART6_VM_ASYNC                      1

/* Pins */

/* USART6_RX */
#define MX_USART6_RX_Pin                        PG9
#define MX_USART6_RX_GPIO_Pin                   GPIO_PIN_9
#define MX_USART6_RX_GPIOx                      GPIOG
#define MX_USART6_RX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_USART6_RX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART6_RX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART6_RX_GPIO_AF                    GPIO_AF8_USART6

/* USART6_TX */
#define MX_USART6_TX_Pin                        PG14
#define MX_USART6_TX_GPIO_Pin                   GPIO_PIN_14
#define MX_USART6_TX_GPIOx                      GPIOG
#define MX_USART6_TX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_USART6_TX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART6_TX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART6_TX_GPIO_AF                    GPIO_AF8_USART6

/*------------------------------ USB_OTG_FS     -----------------------------*/
#define MX_USB_OTG_FS                           1

/* Handle */
#define MX_USB_OTG_FS_HANDLE                    hpcd_USB_OTG_FS

/* Virtual mode */
#define MX_USB_OTG_FS_VM                        Device_Only
#define MX_USB_OTG_FS_Device_Only               1

/* Pins */

/* USB_OTG_FS_DM */
#define MX_USB_OTG_FS_DM_Pin                    PA11
#define MX_USB_OTG_FS_DM_GPIO_Pin               GPIO_PIN_11
#define MX_USB_OTG_FS_DM_GPIOx                  GPIOA
#define MX_USB_OTG_FS_DM_GPIO_Mode              GPIO_MODE_AF_PP
#define MX_USB_OTG_FS_DM_GPIO_PuPd              GPIO_NOPULL
#define MX_USB_OTG_FS_DM_GPIO_Speed             GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_FS_DM_GPIO_AF                GPIO_AF10_OTG_FS

/* USB_OTG_FS_DP */
#define MX_USB_OTG_FS_DP_Pin                    PA12
#define MX_USB_OTG_FS_DP_GPIO_Pin               GPIO_PIN_12
#define MX_USB_OTG_FS_DP_GPIOx                  GPIOA
#define MX_USB_OTG_FS_DP_GPIO_Mode              GPIO_MODE_AF_PP
#define MX_USB_OTG_FS_DP_GPIO_PuPd              GPIO_NOPULL
#define MX_USB_OTG_FS_DP_GPIO_Speed             GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_FS_DP_GPIO_AF                GPIO_AF10_OTG_FS

/* USB_OTG_FS_ID */
#define MX_USB_OTG_FS_ID_Pin                    PA10
#define MX_USB_OTG_FS_ID_GPIO_Pin               GPIO_PIN_10
#define MX_USB_OTG_FS_ID_GPIOx                  GPIOA
#define MX_USB_OTG_FS_ID_GPIO_Mode              GPIO_MODE_AF_PP
#define MX_USB_OTG_FS_ID_GPIO_PuPd              GPIO_NOPULL
#define MX_USB_OTG_FS_ID_GPIO_Speed             GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_FS_ID_GPIO_AF                GPIO_AF10_OTG_FS

/* USB_OTG_FS_VBUS */
#define MX_USB_OTG_FS_VBUS_Pin                  PA9
#define MX_USB_OTG_FS_VBUS_GPIO_Pin             GPIO_PIN_9
#define MX_USB_OTG_FS_VBUS_GPIOx                GPIOA
#define MX_USB_OTG_FS_VBUS_GPIO_Mode            GPIO_MODE_AF_PP
#define MX_USB_OTG_FS_VBUS_GPIO_PuPd            GPIO_NOPULL
#define MX_USB_OTG_FS_VBUS_GPIO_Speed           GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_FS_VBUS_GPIO_AF              GPIO_AF10_OTG_FS

#endif  /* MX_DEVICE_H__ */
