# Potentiometer LED Color Range Indicator

## Description
This project lights up one of three LEDs (Red, Yellow, Green) depending on the voltage range (analog value) read from a potentiometer.

## Components Used
- Arduino UNO
- Red, Yellow, Green LEDs
- 330Ω Resistors (3x)
- 10kΩ Potentiometer
- Breadboard and jumper wires

## Circuit Diagram
https://www.tinkercad.com/things/dnksGsvfR6J-neat-wluff/editel?returnTo=https%3A%2F%2Fwww.tinkercad.com%2Fdashboard

## Code Explanation
- Reads analog value from potentiometer.
- Based on range:
  - 0<=V<=3: Red LED ON
  - 3<V<4: Yellow LED ON
  - 4<V<5: Green LED ON
## Code Explanation
- Pin connections:
  - Red LED: Pin 8
  - Yellow LED: Pin 12
  - Green LED: Pin 13
  - Potentiometer: Pin A2

## How to Run
1. Assemble the circuit.
2. Upload `Potentiometer_LED_Color_Range_Indicator.ino` to Arduino.
3. Rotate the potentiometer to change LED color based on range.

## Output
- Low range: Grenn ON
- Mid range: Yellow ON
- High range: Red ON
