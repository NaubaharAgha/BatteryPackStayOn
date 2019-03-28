# BatteryPackStayOn

Code and circuit diagram found here: https://www.held-im-ruhestand.de/hardware/powerbank-autooff.html

Use LED pin (pin 13) as an output to a ~1kOhm Resistor. This goes into the Base (pin 2) of a transistor. Pin 1 (collector) of the transistor goes into a small resistance (I used ~50 Ohm) into 5V rail. Pin 3 (emitter) of the transistor goes into ground.

Variables:
msToWait - How long to wait between pulses (default: 3 sec or 3000 msec)
switchDelay - How long the duty cycle of the pulse should be (default: 500 msec). Could probably be shorter...

Circuit Diagram:

![Circuit Diagram](https://raw.githubusercontent.com/NaubaharAgha/BatteryPackStayOn/master/images/circuit.png)
