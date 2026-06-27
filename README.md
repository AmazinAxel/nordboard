# Nord themed custom split keyboard

Column staggered Nord-inspired Corne-based split keyboard

Designed to be extremely portable while being ergonomic and comfortable. I made this board since I couldn't find something that ticked all the boxes. A few things this board considers:

- Choc v1 linear switches
  - Why: for reduced strain/key travel distance and less noise
  - Especially when using in public spaces, clicky switches are kind of obnoxious
- NOT curved, it's flat and without any key spacing
  - Why: This is a daily carry item. Therefore a keyboard in your backpack should be light and fit in a small pocket.
  - Key spacing is good for keeping this compact and minimal key distance means you can fit more keys and access them faster in a smaller form factor
- Chocolate [Corne](https://github.com/foostan/crkbd) layout
  - Why: it's very popular and its design is proven!
- No row stagger and good column stagger
  - Why: for ergonomics, it curves better to the natural shape of your fingers and hand
  - This is inspired by Corne. Thumb clusters are modified to maximize space, though it might take some getting used to
- No LEDs or rotary encoders or OLED displays!!
  - Why: a big goal of this project is to be suuuper cheap. These are gimmicks and add unnecessary cost for no useful benefit. This PCB is designed to be as affordable to produce as possible
- Plateless/no hot-swap sockets
  - Why: This makes the board lighter, thinner and cheaper for carrying, and helps with assembly and keeping it low-profile
- XIAO RP2040
  - Why: it's very inexpensive, resource-efficient (so it doesn't drain your laptop battery), and very well-supported by a lot of keyboard firmwares
  - (it also requires less soldering!)
- No battery or Bluetooth support, and a USB-C interconnect instead of an audio jack
  - Why: there are a lot of reasons:
  - Batteries are heavy and this would mean expanding the footprint of this design. Right now it's as minimal as it gets, adding wireless support is where things start to get bulky
  - You don't need to worry about charging or latency over bluetooth since it's always plugged in! Having cables on a desk is almost never a problem if your laptop has a spare port.
  - While an audio jack DOES have just enough pins to carry data, ground and power (and is almost always the right choice for this) using a standard port with cables available everywhere allows you to use the interconnect cable for emergencies or other temporary purposes. It is highly versatile. When left in a bag, a 3.5mm headphone cable is basically useless.
  - Adding wireless support means to switch away from the XIAO that we are using. Every single GPIO pin exposed by the Xiao is used by the keyboard (this is a good thing! We don't waste any pins), so there is no easy opportunity of adding this support without switching the MCU and redesigning the schematic/PCB.
- XIAO placed vertically center so that a cable head takes up less desk space

The advantages of all of the above result in a very well thought-out product which is as cheap as it gets while prioritizing function and ergonomics over all. I'm quite proud of the design. I hope you enjoy it too!

## Some renders

![1](https://cdn.hackclub.com/019f061d-a93b-74f6-a9eb-b2ab288ddd44/20260626-154708-edited.png)
![2](https://cdn.hackclub.com/019f061e-140e-74b2-a618-c20484e5b335/20260626-154737-edited.png)
![3](https://cdn.hackclub.com/019f061f-481e-7f67-bef8-47d9cb795bd0/20260626-154856-edited.png)
![4](https://cdn.hackclub.com/019f0620-249b-7dce-b437-22621c4eb3fb/20260626-154952-edited.png)
![5](https://cdn.hackclub.com/019f062e-5b49-7400-8840-18d611797bc9/20260626-160524-edited.png)
![6](https://cdn.hackclub.com/019f062e-dee9-7d6c-8b82-878c8b134c4f/20260626-160558-edited.png)

[Model available on Onshape](https://cad.onshape.com/documents/24ef5e976496ee201db7b05f/w/fbfc374ac70f5cb67c606ba5/e/005f221e2e9fc59a8e2e02ea)

## PCB & schematic

![7](https://cdn.hackclub.com/019f0626-1abc-71b3-97cc-2e662d702b12/20260626-155622-edited.png)
![8](https://cdn.hackclub.com/019f0626-c87d-7cba-bdd6-6c85389102d0/20260626-155708-edited.png)

## Firmware setup

I am using QMK firmware for this since it's lightweight and fast. To flash it yourself, you need to install qmk (if you're on Nix, set `hardware.keyboard.qmk.enable` to true and install `qmk`)

After cloning this project, run:
```
ln -s <nordboard project folder>/firmware ~/qmk_firmware/keyboards/nordboard
qmk compile -kb nordboard -km default
```

## Bill of Materials

| Part | Where to buy | Cost before tax | Notes |
| -- | -- | -- | -- |
| Keycaps | <https://www.aliexpress.us/item/3256806548230734.html> | $26 | 50pc, transparent (Does come with 8 extras) |
| Seeed XIAO RP2040 | <https://www.seeedstudio.com/XIAO-RP2040-v1-0-p-5026.html> | $7.89 | 2pc, may charge shipping |
| Choc Switches | <https://www.aliexpress.us/item/3256808697103313.html> | $25 | 50pc, blue (Also comes with 8 extras) |
| The board itself! | JLCPCB | $48.41 | 5 boards, cheapest settings |
| **Total cost: $107.30** | | | |

You will need a 5.1k resistor (or something close to that), two USB type-C receptacles and a 3D printer/filament for the case. The four mounting holes are 2.2mm radius, 3mm deep. Don't forget a C-to-C interconnect cable and a type-C power cable!

---

Made for [Forge](https://forge.hackclub.com/projects/827)
