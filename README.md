# Automated Braking System using LPC2148
Automated Braking System for vehicles.
## Hardware Requirements
<ul>
<li>LPC2148 Fosc = 12MHz
<li>Ultrasonic Sensor (4 Pin) (HS-SR04 based)
<li>L293D motor Driving IC
<li>2 DC Motors
<li>Batteries
</ul>

## Pin Connections
| Microcontroller  |  Ultrasonic | LCD  | L293D   |
|---|---|---|---|
| P0.9  |  Echo |   |   |   |
|  P0.11 | Trigger  |   |   |
| P0.10  |   | RS  |   |
| P0.12  |   | RW  |   |
| P0.13  |   | EN  |   |
| P0.16-23  |   |  D0-D7 |   |
| P1.16  |   |   | EN1  |
| P1.17  |   |   | EN2  |
U can reffer proteus file for better understanding of connections [Proteus File](https://github.com/StrangeAJ/AutoBrakeLPC2148/blob/main/Mini%20Project.pdsprj)

## Simulation
Software Simulation has done and has uploaded [Proteus File](https://github.com/StrangeAJ/AutoBrakeLPC2148/blob/main/Mini%20Project.pdsprj)
