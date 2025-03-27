#include <TimerOne.h>
//all my variables
int joystickX = A1;
int joystickY = A2;
int temperatureSensor = A4;
int lightSensor = A5;
int greenLed = 11;
int blueLed = 10;
int redLed = 9;
int choice;
int Vo;
float R1 = 10000;
float logR2, R2, Temperature;
float c1 = 0.001129148, c2 = 0.000234125, c3 = 0.0000000876741;
String xZone;
String yZone;
volatile int taskNum = 0;
void setup() {
Serial.begin(9600);
pinMode(greenLed, OUTPUT);
pinMode(blueLed, OUTPUT);
pinMode(redLed, OUTPUT);
Timer1.initialize(10000000);
Timer1.attachInterrupt(swapTasks);
}
void loop() {
if (taskNum == 1) {
digitalWrite(blueLed, HIGH);
choice = 1;
}
else if (taskNum == 2) {
digitalWrite(redLed, HIGH);
choice = 2;
}
else if (taskNum == 3) {
digitalWrite(greenLed, HIGH);
choice = 3;
}
//Repeat choice until new one is chosen
//print joystick output
if (choice == 1) {
int x = analogRead(joystickX);
int y = analogRead(joystickY);
if (x < 342) {
xZone = "right";
} else if (x > 682) {
xZone = "left";
} else {
xZone = "center";
}
if (y < 342) {
yZone = "down";
} else if (y > 682) {
yZone = "up";
} else {
yZone = "center";
}
Serial.println("(" + xZone + "," + yZone + ")");
}
//print temperature output
else if (choice == 2) {
Vo = analogRead(temperatureSensor);
R2 = R1 * (1023.0 / (float)Vo - 1.0);
logR2 = log(R2);
Temperature = (1.0 / (c1 + c2*logR2 + c3*logR2*logR2*logR2));
Temperature = Temperature - 273.15;
Temperature = (Temperature * 9.0)/ 5.0 + 32.0;
Serial.print("Temperature: ");
Serial.print(Temperature);
Serial.println(" Fahrenheit");
}
//print light output
else if (choice == 3) {
int light = analogRead(lightSensor);
int brightness = map(light, 0, 1000, 100, 0);
Serial.println("Brightness: " + String(brightness) + "%");
}
delay(100);
}
void swapTasks(){
if (taskNum == 3){
taskNum = 1;
}
else {
taskNum++;
}
digitalWrite(greenLed,LOW);
digitalWrite(blueLed, LOW);
digitalWrite(redLed, LOW);
}