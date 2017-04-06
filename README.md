# Arduino Controlled Coffee Roaster

This repo contains a sketch for interfacing an
Arduino with [Artisan](https://github.com/artisan-roaster-scope/artisan) RoasterScope. You can use this software to modify a popcorn popper into a computer controlled coffee roaster!

![roasted coffee pic](images/20170324_152822.jpg)



## Parts
This setup is designed to be extremely low budget. The parts you will need are:

- [Arduino](https://www.arduino.cc/en/main/arduinoBoardUno): I used an Arduino Uno
- [MAX6675 Thermocouple with Breakout](https://www.aliexpress.com/item/MAX6675-Module-K-Type-Thermocouple-Thermocouple-Sensor-for-Arduino-AL/32278773562.html): $3.96 CAD on AliExpress. The Arduino uses this to read the temperature during roasting. Coffee roasting temperatures are around 180°C – 240°C so make sure your thermocouple is rated high enough to handle this.
- [Solid State Relay](https://www.aliexpress.com/item/FREE-SHIPPING-Industrial-FOTEK-Solid-State-Relay-SSR-40A-with-Protective-Flag-SSR-40DA-40A-DC/2035173599.html): I used a 40A SSR for controlling the heating element. 40A is probably overkill, but you probably shouldn't use one less than 25A depending on the wattage of your popcorn popper.
- MOSFET Transistor: The Arduino digital pins didn't have enough power to control the relay, so I used a mosfet transistor between the digital pin and relay. This might not be an issue depending on your relay though.
- Tape, Wires, Breadboard, Solder, etc..
-And most importantly: Green Coffee Beans! I've been using beans from a local coffee roaster, but if you want to buy some online to get started you can check out [Sweet Maria's](https://www.sweetmarias.com/)


## Wiring

## Arduino Setup

## Modbus

## Artisan Config

## PID

## Roasting Profile

## Tips

## Credits
