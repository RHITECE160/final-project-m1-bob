// Sweep
// by BARRAGAN <http://barraganstudio.com> 
// Modified for Energia/Stellaris Launchpad by Kevin Balke <fughilli@gmail.com>
// This example code is in the public domain.
#include <SimpleRSLK.h>
#include <Servo.h> 
 
Servo myservo;  // create servo object to control a servo 
                // a maximum of eight servo objects can be created 
 
int pos = 0;    // variable to store the servo position 
 
void setup() 
{ 
  setupRSLK();
  myservo.attach(SRV_0);  // attaches the servo on Port 1, pin 5 to the servo object
} 
 
 
void loop() 
{ 
  for(pos = 40; pos < 140; pos += 1)  // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(40);                       // waits 40ms for the servo to reach the position 
  } 
  for(pos = 140; pos>=41; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(40);                       // waits 40ms for the servo to reach the position 
  } 
} 
