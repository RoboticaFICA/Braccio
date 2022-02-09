/* ***********************************************************************
 *  Author: Jose Armando Saenz Esqueda
 *  date: 09 February 2022
 *  Procedding: Universidad Juarez del Estado de Durango - Facultad de Ingeniería Ciencias y Arquitectura
*********************************************************************** */
#include <Servo.h>

Servo base;
Servo shoulder;
Servo elbow;
Servo wrist_rot;
Servo wrist_ver;
Servo gripper

void setup() {
  // put your setup code here, to run once:
  base.attach(11);
  shoulder.attach(10);
  elbow.attach(9);
  wrist_rot.attach(6);
  wrist_ver.attach(5);
  gripper.attach(3);
}

void loop() {
  // put your main code here, to run repeatedly:

}
