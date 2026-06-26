# Nord themed custom split keyboard

Column staggered Nord-inspired Corne-based split keyboard

A few design choices:

- Choc v1 switches
  - Why: for reduced strain/key travel distance and less noise
- No row stagger and good column stagger
  - Why: for ergonomics, it curves better to the natural shape of your fingers and hand.
- NOT curved, it's flat and without any key spacing
  - Why: This is a daily carry item. Therefore a keyboard in your backpack should be light and fit in a small pocket.
  - Key spacing is good for keeping this compact and minimal key distance means you can fit more keys and access them faster in a smaller form factor
- Chocolate [Corne](https://github.com/foostan/crkbd) layout
  - Why: it's very popular and its design is proven!
  - I also like it's take on minimalism in most aspects
- No LEDs or rotary encoders or OLED displays!!
  - Why: a big goal of this project is to be suuuper cheap. These are gimmicks and add unnecessary cost for no useful benefit. This PCB is designed to be as affordable to produce as possible
- XIAO RP2040
  - Why: it's very inexpensive, resource-efficient (so it doesn't drain your laptop battery), and very well-supported by a lot of keyboard firmwares
- No battery or Bluetooth support, and a USB-C interconnect instead of an audio jack
  - Why: there are a lot of reasons:
  - Batteries are heavy and this would mean expanding the footprint of this design. Right now it's as minimal as it gets, adding wireless support is where things start to get bulky
  - You don't need to worry about charging or latency over bluetooth since it's always plugged in! Having cables on a desk is almost never a problem if your laptop has a spare port.
  - While an audio jack DOES have just enough pins to carry data, ground and power (and is almost always the right choice for this) using a standard port with cables available everywhere allows you to use the interconnect cable for emergencies or other temporary purposes. It is highly versatile. When left in a bag, a 3.6mm headphone cable is basically useless.
  - Adding wireless support means to switch away from the XIAO that we are using. Every single GPIO pin exposed by the Xiao is used by the keyboard (this is a good thing! We don't waste any pins), so there is no easy opportunity of adding this support without switching the MCU and redesigning the schematic/PCB.

The advantages of all of the above result in a very well thought-out product which is as cheap as it gets while prioritizing function and ergonomics over all. I'm quite proud of the design. I hope you enjoy it too!

Renders and PCB images coming soon!!

---

Made for [Forge](https://forge.hackclub.com/projects/827)
