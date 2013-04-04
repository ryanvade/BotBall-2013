// Created on Thu April 4 2013

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	  // preset servo 1 position
   cout << "advance using A button\n\nB to quit\n";   
	set_servo_position(1,700); 
   enable_servos(); // turn on servos
   msleep(2000); // pause while it moves and user reads screen
   while((accel_y() > -150) && (b_button()==0))
   {  // move servo 1 in steps of 100
      set_servo_position(1,get_servo_position(1)+ 1348);
      cout << ("servo at %d\n", get_servo_position(1));
      msleep(200); // pause before next move
      while((!a_button()) && (!b_button())) {}
   }
   disable_servos();
   cout   "Tilt! Robot is done\n";
   return 0;
}
