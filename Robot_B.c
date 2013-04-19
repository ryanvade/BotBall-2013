// Created on Sat April 13 2013
// This is a transport move test. 
int main()
{
	wait_for_light(3); // start the robot after the light is turned on
	shut_down_in(120); // shutdown the robot in 2 Minutes
	
	printf("Hello, World!\n");
	set_servo_position(1, 0);
	enable_servos();
	motor(1,100); // move the right wheel
	motor(3,100); // move the left wheel
	msleep(3500); // move for 3.5 seconds
	ao();
	
	set_servo_position(1, get_servo_position(1)+ 2048); // kick bot guy out
	motor(1,-100);
	motor(3,-100);
	
	return 0;

}
