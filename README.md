Project Overview

TaskSwitcher is an advanced Arduino project designed to demonstrate the use of interrupts for task switching between different sensor inputs and outputs. Utilizing a joystick, temperature sensor, light sensor, and LED indicators, this project showcases real-time sensor data processing and user interaction via a serial interface. TaskSwitcher is ideal for educational purposes, demonstrating the principles of embedded systems programming, interrupt handling, and sensor integration.
Features

    Interrupt-Driven Task Management: Uses hardware timers to switch tasks dynamically, allowing efficient management of multiple sensor readings.

    Sensor Integration: Includes analog readings from a joystick, temperature sensor, and light sensor, with data processed and displayed in real-time.

    LED Feedback System: Utilizes different colored LEDs to indicate the active sensor being read, enhancing user interaction and visualization.

    Serial Communication: Commands received through the serial monitor control the output and system behavior, providing a hands-on experience with UART communication.

Hardware Components

    Arduino UNO R3

    Joystick (2-axis)

    Temperature sensor (Thermistor)

    Light sensor (Photocell)

    RGB LED

    Connecting wires

    USB power cable

Software and Libraries

    Arduino IDE

    TimerOne library for handling interrupts

Setup and Installation

    Hardware Setup: Connect each sensor and the LED to the Arduino according to the circuit schematics provided in the repository.

    Software Configuration: Install the TimerOne library through the Arduino Library Manager, load the provided sketch into the Arduino IDE, and upload it to the Arduino.

    Initialization: Ensure that all connections are secure and that the Arduino IDE is configured with the correct board and port.

Usage

    Starting the Device: Power the Arduino using a USB cable connected to a computer or an external power supply.

    Operating the Device: Use the serial monitor to send commands to control which sensor output to display and manage LED indications.

    Interacting with Sensors: Manipulate the joystick or alter the environmental conditions around the temperature and light sensors to see real-time changes in the serial monitor.

Serial Commands

    Joystick Output: j

    Temperature Output: T

    Light Sensor Output: L

    LED Brightness Control: Example r2 for medium brightness on the red LED

Future Enhancements

    Wireless Control: Addition of Bluetooth or Wi-Fi modules to control the device remotely.

    Data Logging: Implement data storage capabilities to log sensor data for further analysis.

    User Interface: Develop a graphical user interface to visualize sensor data and control the device settings more intuitively.

Contributions

Contributions are highly encouraged! If you have ideas for new features, bug fixes, or improvements, please fork this repository and submit a pull request.
License

TaskSwitcher is released under the MIT License. See the LICENSE file in the repository for more details.
