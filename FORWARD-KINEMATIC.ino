#include <Servo.h>

Servo  moto1;
Servo  moto2;
double L1=5;
double L2=5;
const double pi=3.14;
  double x;
double y;
  double Q1;
  double Q2;
  double Q;
void setup(){
  
  moto1.attach(2); //motor1 connected to pin2 arduino
  
  moto2.attach(4);   //motor2 connected to pin4 arduino
}
void loop(){
 Q1=60;     //assumption angles to find the forward kinematic
  Q2=30;
   Q=Q1+Q2;
  x=L1*cos(Q1*(pi/180))+L2*cos(Q*(pi/180));   //THE value of x=2.5
  y=L1*sin(Q1*(pi/180)) + L2*sin(Q*(pi/180));      //Th value of y=9.33
  printf("x value is %lf \n", x);
  printf("y value is   \n", y);
  moto1.write(Q1); //motor1 will rotate at 60 degree
  moto2.write(Q2);   //motor1 will rotate at 30 degree
  
  delay(3500);
  
  moto1.write(0); 
  moto2.write(0);
    delay(1500);
}
