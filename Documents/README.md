# Overview

The discovery kit enables a wide range of use cases taking advantage of
premium graphics, audio, multi-sensor support, WVGA color display,
security, memory extension and connectivity features. An embedded
ST-LINK/V2-1 debugger/programmer is included; specialized add-on boards
can be connected thanks to the **Arduino™ UNO** or to the **expansion**
connectors.

# Board pinout

## Pins Legend

![](disco_f469ni_mbed_pinout_v3.png)

## ST-LINK driver installation and firmware upgrade

1. Download the latest [ST-LINK driver](https://www.st.com/en/development-tools/stsw-link009.html).
2. Extract the archive and run `dpinst_amd64.exe`. Follow the displayed instructions.
3. Download the latest [ST-LINK firmware upgrade](https://www.st.com/en/development-tools/stsw-link007.html).
4. Extract the archive and run the STLinkUpgrade.exe program.
5. Connect the board to your PC using a USB cable and wait until the USB enumeration is completed.
6. In the **ST-Link Upgrade** program, press the **Device Connect** button.
7. When the ST-LINK driver is correctly installed, the current ST-LINK version is displayed.
8. Press the **Yes >>>>** button to start the firmware upgrade process.

# Technical reference

- [STM32F469NI microcontroller](https://www.st.com/en/microcontrollers-microprocessors/stm32f469ni.html)
- [32F749IDISCOVERY board](https://www.st.com/en/evaluation-tools/32f469idiscovery.html)
- [User manual](https://www.st.com/resource/en/user_manual/um1932-discovery-kit-with-stm32f469ni-mcu-stmicroelectronics.pdf)
- [Data brief](https://www.st.com/resource/en/data_brief/32f469idiscovery.pdf)
- [Schematic](https://www.st.com/resource/en/schematic_pack/mb1189-f469nih6-b08_schematic.pdf)
