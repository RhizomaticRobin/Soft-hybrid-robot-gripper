#include <Servo.h>

Servo servo1; // create servo structs
Servo servo2;
Servo servo3;
Servo servo4;

int pin1 = 0; // create analog values
int pin2 = 1;
int pin3 = 2;
int pin4 = 3;

int val1 = 0; // create digital values
int val2 = 0;
int val3 = 0;
int val4 = 0;

void setup()
{
  servo1.attach(9); // attach to ninth digital pwm output
  servo2.attach(10); // tenth
  servo3.attach(11); // eleventh 
  servo4.attach(12); // eleventh 
}

void loop() // constantly update servos to reflect rotation of potentiometers
{
	val1 = analogRead(pin1); // update values for servo1
	val1 = map(val1, 3, 1023, 0, 176); // maps analog values to virtual value
	servo1.write(val1); // send new value to servo
	delay(25); // reduce loop lag
  
	val2 = analogRead(pin2); // update values for servo2
	val2 = map(val2, 3, 1023, 0, 176); // maps analog values to virtual value
	servo2.write(val2); // send new value to servo
	delay(25);
  
	val3 = analogRead(pin3); // update values for servo3
	val3 = map(val3, 3, 1023, 0, 176); // maps analog values to virtual value
	servo3.write(val3); // send new value to servo
	delay(25);
  
  	val4 = analogRead(pin4); // update values for servo4
  	val4 = map(val4, 3, 1023, 0, 176); // maps analog values to virtual value
  	servo4.write(val4); // send new value to servo
  	delay(25);
}
