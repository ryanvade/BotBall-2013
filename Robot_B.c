// Created on Sat April 6 2013
/* This program will move Robot B accordig to its assignment.  First it will follow the black line to the Launchpad, grab the Launchpad, then drag it to the launch area */
int main()
{
	printf("Hello, World!\n");
	int rport=1, leftmtr=3, rightmtr=0; // identify ports used, might need to change
	int threshold=700; // light threshold in the room
	int high=100, low=-10; //motor power for arc. Will need to change to perfect drive. 
	while (b_button()==0) {} // start after pushing B 
	/* To be replaced with wait_for_light(port#); so that light starts the robot. Right now it is started with B*/
	while (a_button()==0){ // stop after pushing A
		/* to be relplaced with a button sensor. Such as digital(Port #); so that the claw grabs the transport when the sensor(s) are pushed.*/
			while (analog10(rport) > threshold) { // continue until not dark
			motor(leftmtr,low); motor(rightmtr,high); // arc left
			if (a_button()!=0) break; } // or button pressed
			// to be replaced with a sensor
			while (analog10(rport) <= threshold){ // continue until dark
			motor(leftmtr,high); motor(rightmtr,low); // arc right
			if (a_button()!=0) break; } // or button pressed 
			// to be replaced with a sensor
			ao(); 
			//all stop because button was pushed. 
		}
	return 0;
}
