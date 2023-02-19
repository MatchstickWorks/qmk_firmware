# StealthPad

![StealthPad](https://i.imgur.com/Wl71thnh.jpg)

This is a recreation of the Steelseries Merc Stealth macropad featuring a USB-C connection and powered by the RP2040 MCU.

Default layout is such:

![StealthPad Layout](https://i.imgur.com/jc7T2jl.jpg)

* Keyboard Maintainer: [Logan Butler](https://github.com/MatchstickWorks)
* Hardware Supported: StealthPad PCB
* Hardware Availability: Either via [my Etsy Store](https://www.etsy.com/shop/MatchstickWorksShop) or by messaging directly

Getting the board into bootloader mode:

In order to flash the firmware to this board, press the Boot and Reset buttons on the back of the PCB. You should hear a USB disconnect and reconnect sound shortly following.

Make example for this keyboard (after setting up your build environment):

    make matchstickworks/stealthpad:default

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
