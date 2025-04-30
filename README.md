# Temprature-sensor-using-Arduino-UNO
This project demonstrates a simple embedded system using an Arduino Uno, LM35 temperature sensor, and a 16x2 LCD display. The system reads ambient temperature in real-time and displays it on the LCD. The entire project was first simulated in Tinkercad before physical deployment to ensure proper circuit design and logic.

## Tinkercad Simulation
1) Before physical implementation, the circuit and code were fully simulated using Tinkercad Circuits. This allowed testing:
2) Correct analog reading from the LM35 sensor
3) LCD interfacing and data display
4) Sensor-to-temperature conversion logic

## Tinkercad Simulation Features:
1) Real-time display of temperature data
2) Easy debugging of LCD pin connections
3) Code tested using Arduino simulation engine

## Hardware Used:
1) Arduino Uno
2) LM35 Temperature Sensor
3) 16x2 LCD Display (Parallel Mode)
4) Breadboard & Jumper Wires
5) Potentiometer (for LCD contrast)
6) USB cable for Arduino programming

## Tinkercad prototype simulation:
[https://www.tinkercad.com/things/2Lj3pCtyDyu-stunning-bruticus]

<p align="center">
  <img src="https://github.com/profitter261/Temprature-sensor-using-Arduino-UNO/blob/main/images/Screenshot%202025-04-30%20104606.png?raw=true" alt="Temprature sensor prototype using DHT11 sensor and Arduino UNO" width="400"/>
  <br>
  <em>Figure 1: Temprature sensor prototype using DHT11 sensor and Arduino UNO</em>
</p>

## Circuit Description:
1) The LM35 sensor outputs an analog voltage proportional to temperature (10mV/°C), connected to A0 on Arduino.
2) The 16x2 LCD is interfaced using digital pins (or I2C if used).
3) Arduino reads the sensor values via ADC, converts them to Celsius, and displays the result on the LCD.

## Hardware Setup:
<p align="center">
  <img src="https://github.com/profitter261/Temprature-sensor-using-Arduino-UNO/blob/main/images/Screenshot%202025-04-30%20105220.png?raw=true" alt="temprature sensor using LM35 sensor and Arduino UNO" width="400"/>
  <br>
  <em>Figure 1: temprature sensor using LM35 sensor and Arduino UNO</em>
</p>

## Learning Outcomes:
1) Basics of analog-to-digital conversion with Arduino
2) Sensor interfacing (LM35) and data processing
3) Embedded display systems using 16x2 LCD
4) Simulation/testing using Tinkercad before hardware deployment
