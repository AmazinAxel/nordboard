# Nord themed custom split keyboard

Column staggered Nord-inspired Corne-based split keyboard

![1](https://cdn.hackclub.com/019f061d-a93b-74f6-a9eb-b2ab288ddd44/20260626-154708-edited.png)

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
- CH32X035
  - When this project was named NordBoard, it used a XIAO RP2040 which was kind of overkill since it was a devboard. When optimizing for cost (and complexity) it makes a lot more sense to just have the mcu on the board.
  - I chose a CH32X035 because its new, well-stocked, _extremely_ cheap (50 cents??) and has enough pins for scanning both sides. It is plenty fast and has USB flashing (and supports HID) and didn't require me to add additional parts for ESD protection since it's all built in.
  - It has flash and a crystal already so there's less components to place and its overall cheaper than something like an RP2040.
  - HOWEVER, it has terrible firmware support and no keyboard firmware supports it right now. I found some Arduino resources that can turn this chip into an HID keyboard emulator, all that's needed is to implement some matrix scanning, keyboard features like layers and then you don't need a big firmware like qmk!
  - This is what makes this board stand out. From what I can tell, this is the first keyboard that uses this new chip. It is better than its counterparts in every way. This keyboard is ahead of its curve!

The advantages of all of the above result in a very well thought-out keyboard for travel and ergonomics. I'm quite proud of the design. I hope you enjoy it too!

## Some renders

![2](https://cdn.hackclub.com/019f061e-140e-74b2-a618-c20484e5b335/20260626-154737-edited.png)
![3](https://cdn.hackclub.com/019f061f-481e-7f67-bef8-47d9cb795bd0/20260626-154856-edited.png)
![4](https://cdn.hackclub.com/019f0620-249b-7dce-b437-22621c4eb3fb/20260626-154952-edited.png)
![5](https://cdn.hackclub.com/019f062e-5b49-7400-8840-18d611797bc9/20260626-160524-edited.png)
![6](https://cdn.hackclub.com/019f062e-dee9-7d6c-8b82-878c8b134c4f/20260626-160558-edited.png)

[Model available on Onshape](https://cad.onshape.com/documents/24ef5e976496ee201db7b05f/w/fbfc374ac70f5cb67c606ba5/e/005f221e2e9fc59a8e2e02ea)

## PCB & schematic

![7](https://cdn.hackclub.com/019f8cf5-5d7f-7e67-87f0-bd69dac8989d/20260722-201155-edited.png)
![8](https://cdn.hackclub.com/019f8cf4-6372-7091-b804-5b71b93f28a9/20260722-201051-edited.png)

## Firmware setup

## Bill of Materials

| Part                        | Where to buy                                               | Cost before tax         | Notes                                       |
| --------------------------- | ---------------------------------------------------------- | ----------------------- | ------------------------------------------- |
| Keycaps                     | <https://www.aliexpress.us/item/3256806548230734.html>     | $26                     | 50pc, transparent (Does come with 8 extras) |
| Seeed XIAO RP2040           | <https://www.seeedstudio.com/XIAO-RP2040-v1-0-p-5026.html> | $7.89                   | 2pc, may charge shipping                    |
| Choc Switches               | <https://www.aliexpress.us/item/3256808697103313.html>     | $25                     | 50pc, blue (Also comes with 8 extras)       |
| A short C-to-C interconnect | https://www.aliexpress.us/item/3256810399626545.html       | $11.87                  | T6A-T6B 20P, 0.25m                          |
| The board itself!           | JLCPCB                                                     | $48.41                  | 5 boards, cheapest settings                 |
|                             |                                                            | **Total cost: $107.30** |

You will need a 5.1k resistor (or something close to that), two USB type-C receptacles and a 3D printer/filament for the case. The four mounting holes are 2.2mm radius, 3mm deep. Don't forget a type-C power cable!

---

Made for [Forge](https://forge.hackclub.com/projects/827)
