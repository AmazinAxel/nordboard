# Nord themed custom split keyboard

Column staggered Nord-inspired Corne-based split keyboard

![1](https://cdn.hackclub.com/019f8d8c-a3bc-7d7f-b3ad-4761dd6f6ee2/20260722-225705-edited.png)

Designed to be extremely portable while being ergonomic and comfortable. A few things this board considers:

- Kalih Choc v1 linear switches
  - Why: for reduced key travel distance and less noise
  - Especially when using in public spaces, clicky switches are kind of obnoxious
- No battery or Bluetooth support, and a SS USB-C interconnect
  - Why: there are a lot of reasons:
  - Batteries are heavy and this would mean expanding the footprint of this design. Right now it's as minimal as it gets, adding wireless support is where things start to get bulky
  - You don't need to worry about charging or latency over bluetooth! Having cables on a desk is almost never a problem if your laptop has a spare port. This is well worth the peace of mind of having to check the keyboard battery, remembering to charge it and having to deal with connecting/disconnecting it.
  - It's the lowest latency you can possibly get. Especially for productivity, every keystroke counts and the faster something updates, the faster you can work.
  - While an audio jack DOES have just enough pins to carry data, ground and power (and is almost always the right choice for this) using a standard port with cables available everywhere allows you to use the interconnect cable for emergencies or other temporary purposes. It is highly versatile. When left in a bag, a 3.5mm headphone cable is basically useless.
  - The SS cable is necessary since it has all the necessary wires to transmit the entire right-half of the keyboard's data without needing to process it on its own half. This means we reduce cost, latency and processing cost and get to carry around a high speed cable with us fo emergencies wherever you travel.
- NOT curved, it's flat and without any key spacing (besides thumb clusters)
  - Why: This is a daily carry item. Therefore a keyboard in your backpack should be light and fit in a small front pocket.
  - Key spacing is good for keeping this compact and minimal key distance means you can fit more keys and access them faster in a smaller form factor
  - It's cheaper to produce the board
- Chocolate [Corne](https://github.com/foostan/crkbd) layout (it's very popular and its design is proven!)
- No row stagger and good column stagger
  - Why: for ergonomics, it curves better to the natural shape of your fingers and hand
  - This is inspired by Corne. Thumb clusters are modified to maximize space, though it might take some getting used to
- No LEDs or rotary encoders or OLED displays (!!)
  - Why: a big goal of this project is to be suuuper cheap. These are gimmicks and add unnecessary cost for no useful benefit. This PCB is designed to be as affordable to produce as possible
- Plateless/no hot-swap sockets
  - Why: This makes the board lighter, thinner and cheaper for carrying, and helps with assembly and keeping it low-profile
  - For me, I never need to swap my switches. I consider this a gimmick in a lot of ways since you can always desolder the switch if it breaks. There's really no reason to have it imo
- CH32X035 (CH32X035G8U6)
  - When this project was named NordBoard, it used a XIAO RP2040 which was kind of overkill since it was a devboard. When optimizing for cost (and complexity) it makes a lot more sense to just have the mcu on the board.
  - I chose a CH32X035G8U6 because its new, well-stocked, _extremely_ cheap (50 cents??) and has enough pins for scanning both sides. It is plenty fast and has USB flashing (and supports HID) and didn't require me to add additional parts for ESD protection since it's all built in.
  - It has flash and a crystal already so there's less components to place and its overall cheaper than something like an RP2040.
  - HOWEVER, the CH32X035 has terrible firmware support and no keyboard firmware supports it right now. I found some Arduino resources that can turn this chip into an HID keyboard emulator, all that's needed is to implement some matrix scanning, keyboard features like layers and then you don't need a big firmware like qmk!
  - This is what makes this board stand out. From what I can tell, this is the first keyboard that uses this new chip. It is better than its counterparts in every way. This keyboard is ahead of its curve!

The advantages of all of the above result in a very well thought-out keyboard for travel and ergonomics. I'm quite proud of the design. I hope you enjoy it too!

## Some renders

![4](https://cdn.hackclub.com/019f8d8d-cd99-7fde-bf6e-9c936678b130/20260722-225822-edited.png)
![2](https://cdn.hackclub.com/019f8d8a-2c4c-7f75-bca8-700eb1c67e0f/20260722-225424-edited.png)
![3](https://cdn.hackclub.com/019f8d89-9f32-711b-a373-c41567c0502e/20260722-225341-edited.png)
![5](https://cdn.hackclub.com/019f8d8e-e329-7c42-a243-b244bb74b4b8/20260722-225931-edited.png)
![6](https://cdn.hackclub.com/019f8d8f-bb65-7fe4-a43e-4d95700b46c2/20260722-230015-edited.png)

[Model available on Onshape](https://cad.onshape.com/documents/24ef5e976496ee201db7b05f/w/fbfc374ac70f5cb67c606ba5/e/005f221e2e9fc59a8e2e02ea)

## PCB & schematic

![7](https://cdn.hackclub.com/019f8cf5-5d7f-7e67-87f0-bd69dac8989d/20260722-201155-edited.png)
![8](https://cdn.hackclub.com/019f8cf4-6372-7091-b804-5b71b93f28a9/20260722-201051-edited.png)

## Firmware setup

**This keyboard CANNOT run QMK or ZMK or any mainline keyboard firmware!!**

We use a very new chip which does not have support for those firmwares yet. The chip is easily programmable with Platformio and there has been work already to make it work as an HID keyboard device, so I am expanding on that to make this function as a layered keyboard.

First, you need to short the two pads on the top right of the board and plug the device into your computer through a data cable. This puts the device into boot mode so you can flash the firmware.

Clone the repo and go into the conifer/ folder. This is the custom firmware that Snowlayer runs on.

If you are running Nix, I highly recommend running `nix develop` to download deps and setup an environment for running the build.

Run `pio run -t upload`. The firmware should flash to the device, but if you are running Linux and have any issues make sure you add these udev rules:

```nix
SUBSYSTEM=="usb|tty", ATTRS{idVendor}=="1a86", ATTRS{idProduct}=="8010", GROUP:="plugdev"
SUBSYSTEM=="usb|tty", ATTRS{idVendor}=="4348", ATTRS{idProduct}=="55e0", GROUP:="plugdev"
SUBSYSTEM=="usb|tty", ATTRS{idVendor}=="1a86", ATTRS{idProduct}=="8012", GROUP:="plugdev"
SUBSYSTEM=="usb", ATTRS{idVendor}=="1a86", MODE="0666"
```

If you are not able to flash it over USB, I broke out the UART pins on the chip so that you can use a programmer and flash directly to the device. I recommend going over USB though.

Once I finish the firmware I'll attach a screenshot showing the layers and keybinds for common actions. This firmware is only partly complete.

## Bill of Materials

| Part                                 | Where to buy                                           | Cost before tax/shipping | Notes                                                   |
| ------------------------------------ | ------------------------------------------------------ | ------------------------ | ------------------------------------------------------- |
| Keycaps                              | <https://www.aliexpress.us/item/3256809223879113.html> | $20                      | 50pc/1350 V1 A (Does come with 8 extras)                |
| Choc Switches                        | <https://www.aliexpress.us/item/3256808697103313.html> | $25                      | 50pc, blue (Also comes with 8 extras)                   |
| A short C-to-C interconnect          | <https://www.aliexpress.us/item/3256811793020961.html> | $8.93                    | T6A-T6B 20P, 0.25m                                      |
| The board itself!                    | JLCPCB                                                 | $15.60                   | 5 boards, cheapest settings (white PCB)                 |
| CH32X035DS0                          | <https://www.lcsc.com/product-detail/C7437027.html>    | $0.56                    | You only need one for the whole board!                  |
| Switch diodes                        | <https://www.lcsc.com/product-detail/C917030.html>     | $0.50                    | 8 extras                                                |
| 100nF capacitor                      | <https://www.lcsc.com/product-detail/C14663.html>      | $1.27                    | 49 extras, I already have these from a previous project |
| 4.7uF capacitor                      | <https://www.lcsc.com/product-detail/C77077.html>      | $0.68                    | 9 extras                                                |
| 3x 1kO resistors                     | <https://www.lcsc.com/product-detail/C21190.html>      | $0.30                    | 97 extras, I already have these from a previous project |
| 24pin USB-C interconnect receptacles | <https://www.lcsc.com/product-image/C53207800.html>    | $0.4\*2 = $0.81          | No extras                                               |
| 12pin USB-C data receptacle          | <https://www.lcsc.com/product-detail/C5178539.html>    | $0.36                    | 4 extras, I already have some from a previous project   |
|                                      |                                                        | **Total cost: 74.01**    | Does not include tax or shipping, actual cost higher    |

<!-- 20+25+8.93+15.60+0.56+0.5+1.27+0.68+0.3+0.81+0.36 -->

You will need a 3D printer & filament (I recommend blue PLA) for the case. The four mounting holes are 2.2mm radius, 3mm deep, you will need mounting screws for those. The C-C interconnect MUST be Superspeed (like the item above) or else it won't have enough lines so the right half of the board won't work right.

## For fabrication

I have supplied pre built JLCPCB gerbers in `jlcpcb`. Upload the snowlayer.zip there, select a white board, and you're done! Make sure you have all the parts from the BOM.

---

Made for [Forge](https://forge.hackclub.com/projects/827)
