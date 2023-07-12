# Two-Simple-Arduino-Uno-Projects
## Temperature Control System

This project implements a temperature control system using an Arduino board and a LM35 temperature sensor. The system displays the temperature in Celsius, Fahrenheit, and Kelvin on a 20x4 LCD screen, and controls the heating and cooling based on a predefined set temperature.

### Components Used
- Arduino board
- LM35 temperature sensor
- 20x4 LCD screen
- LEDs (for indicating heating and cooling)

### Circuit Setup
1. Connect the LM35 temperature sensor to analog pin A0 of the Arduino board.
2. Connect the positive (VCC) and negative (GND) terminals of the LM35 to the appropriate power and ground pins of the Arduino board.
3. Connect the LEDs for indicating heating and cooling to analog pins A4 and A5 of the Arduino board.
4. Connect the LCD screen to the Arduino board's digital pins 10, 11, 4, 5, 6, and 7.

### Functionality
The system continuously reads the temperature from the LM35 sensor and converts it to Celsius, Fahrenheit, and Kelvin. The temperature readings are displayed on the LCD screen.

The system compares the current temperature with a predefined set temperature (`SetTemp`). Based on the comparison, the system controls the heating and cooling LEDs as follows:
- If the current temperature is lower than the set temperature, the heating LED is turned on and the cooling LED is turned off.
- If the current temperature is higher than the set temperature, the heating LED is turned off and the cooling LED is turned on.
- If the current temperature is equal to the set temperature, both the heating and cooling LEDs are turned off.

The system repeats this process in a continuous loop with a delay of 1 second between iterations.

### Usage
1. Connect the Arduino board to your computer and upload the code.
2. Ensure that the circuit is set up correctly as described in the "Circuit Setup" section.
3. Power on the Arduino board.
4. The temperature readings will be displayed on the LCD screen, and the heating and cooling LEDs will indicate the status of the temperature control.
5. Adjust the `SetTemp` variable in the code to change the desired set temperature.

## LED Color Cycling

This project demonstrates color cycling using three LEDs - red, blue, and green - connected to an Arduino board. The LEDs will change their states in a sequential manner, cycling through different colors.

### Components Used
- Arduino board
- Three LEDs (red, blue, and green)

### Circuit Setup
1. Connect the red LED to analog pin A5 of the Arduino board.
2. Connect the blue LED to analog pin A4 of the Arduino board.
3. Connect the green LED to digital pin 9 of the Arduino board.

### Functionality
The code initializes the pin modes for the LED pins and sets their initial states to low. The `changeLedState` function is responsible for changing the state of the LEDs based on the provided `ledPin` parameter.

The `changeLedState` function cycles through different colors by turning on only one LED at a time, while keeping the other LEDs off. It uses the following mapping:
- If the `ledPin` is set to `ledPinRed`, only the red LED is turned on.
- If the `ledPin` is set to `ledPinBlue`, only the blue LED is turned on.
- If the `ledPin` is set to `ledPinGreen`, only the green LED is turned on.
- If the `ledPin` does not match any of the predefined LED pins, all LEDs are turned off.

The `loop` function repeatedly calls the `changeLedState` function with each LED pin, causing the LEDs to cycle through their respective colors. Each LED remains lit for a duration of 1 second (1000 milliseconds) before moving to the next LED.

### Usage
1. Connect the Arduino board to your computer and upload the code.
2. Ensure that the circuit is set up correctly as described in the "Circuit Setup" section.
3. Power on the Arduino board.
4. The LEDs will start cycling through different colors (red, blue, green) in a sequential manner.
5. The cycle will continue indefinitely until the Arduino board is powered off or the code is modified.

Feel free to modify the code as needed for your specific requirements.

```
git clone https://github.com/jassercmk1/Two-Simple-Arduino-Uno-Projects.git
```
