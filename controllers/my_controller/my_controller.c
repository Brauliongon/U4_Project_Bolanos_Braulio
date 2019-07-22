#include <webots/robot.h>
#include <webots/motor.h>
#include <webots/distance_sensor.h>
#include <webots/position_sensor.h>
#include <webots/keyboard.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TIME_STEP 64

float encoder_left_1_angv;
float encoder_left_1_linv;
float encoder_left_1_rpm;
double encoder_left_1_1,encoder_left_1_dif;
int main(int argc, char **argv)
{

  wb_robot_init();
  WbDeviceTag wheel_left_1  = wb_robot_get_device("motor_wheel_left_1");
  WbDeviceTag wheel_left_2  = wb_robot_get_device("motor_wheel_left_2");
  WbDeviceTag wheel_right_1 = wb_robot_get_device("motor_wheel_right_1");
  WbDeviceTag wheel_right_2 = wb_robot_get_device("motor_wheel_right_2");
  WbDeviceTag wheels[4];
  wheels[0] = wheel_left_1;
  wheels[1] = wheel_right_1;
  wheels[2] = wheel_left_2;
  wheels[3] = wheel_right_2;
   wb_keyboard_enable(TIME_STEP);

  while (wb_robot_step(TIME_STEP) != -1) {
    int key;
    key = wb_keyboard_get_key();

    if (key=='W') {
      wb_motor_set_position(wheels[0], INFINITY);
      wb_motor_set_velocity(wheels[0], -20);
      wb_motor_set_position(wheels[1], INFINITY);
      wb_motor_set_velocity(wheels[1], -20);
      wb_motor_set_position(wheels[2], INFINITY);
      wb_motor_set_velocity(wheels[2], -20);
      wb_motor_set_position(wheels[3], INFINITY);
      wb_motor_set_velocity(wheels[3], -20);
    }if (key=='S') {
      wb_motor_set_position(wheels[0], INFINITY);
      wb_motor_set_velocity(wheels[0], 20);
      wb_motor_set_position(wheels[1], INFINITY);
      wb_motor_set_velocity(wheels[1], 20);
      wb_motor_set_position(wheels[2], INFINITY);
      wb_motor_set_velocity(wheels[2], 20);
      wb_motor_set_position(wheels[3], INFINITY);
      wb_motor_set_velocity(wheels[3], 20);
    }if (key=='A') {
      wb_motor_set_position(wheels[0], INFINITY);
      wb_motor_set_velocity(wheels[0], 20);
      wb_motor_set_position(wheels[1], INFINITY);
      wb_motor_set_velocity(wheels[1], -20);
      wb_motor_set_position(wheels[2], INFINITY);
      wb_motor_set_velocity(wheels[2], -20);
      wb_motor_set_position(wheels[3], INFINITY);
      wb_motor_set_velocity(wheels[3], 20);
    }if (key=='D') {
      wb_motor_set_position(wheels[0], INFINITY);
      wb_motor_set_velocity(wheels[0], -20);
      wb_motor_set_position(wheels[1], INFINITY);
      wb_motor_set_velocity(wheels[1], 20);
      wb_motor_set_position(wheels[2], INFINITY);
      wb_motor_set_velocity(wheels[2], 20);
      wb_motor_set_position(wheels[3], INFINITY);
      wb_motor_set_velocity(wheels[3], -20);
    }if (key=='E') {
      wb_motor_set_position(wheels[0], INFINITY);
      wb_motor_set_velocity(wheels[0], 20);
      wb_motor_set_position(wheels[1], INFINITY);
      wb_motor_set_velocity(wheels[1], 20);
      wb_motor_set_position(wheels[2], INFINITY);
      wb_motor_set_velocity(wheels[2], -20);
      wb_motor_set_position(wheels[3], INFINITY);
      wb_motor_set_velocity(wheels[3], -20);
    }if (key=='Q') {
      wb_motor_set_position(wheels[0], INFINITY);
      wb_motor_set_velocity(wheels[0], -20);
      wb_motor_set_position(wheels[1], INFINITY);
      wb_motor_set_velocity(wheels[1], -20);
      wb_motor_set_position(wheels[2], INFINITY);
      wb_motor_set_velocity(wheels[2], 20);
      wb_motor_set_position(wheels[3], INFINITY);
      wb_motor_set_velocity(wheels[3], 20);
    }


  };


  wb_robot_cleanup();

  return 0;
}
