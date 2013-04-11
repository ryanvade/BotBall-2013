// Created on Wenesday April 10 2013
/* This program will move Robot A accordig to its assignment. */
int main()
{
	printf("Hello, World!\n");
	create_connect();
	int rport=1; // identify ports used, might need to change
	int threshold=500; // light threshold in the room
	int high=100, low=-10; //motor power for arc. Will need to change to perfect drive. 
	while (b_button()==0) {} // start after pushing B 
	/* To be replaced with wait_for_light(port#); so that light starts the robot. Right now it is started with B*/
	while (a_button()==0){ // stop after pushing A
		/* to be relplaced with a button sensor. Such as digital(Port #); so that the claw grabs the transport when the sensor(s) are pushed.*/
			while (analog10(rport) > threshold) { // continue until not dark
			create_drive_direct(-10,100); // arc left
			if (a_button()!=0) break; } // or button pressed
			// to be replaced with a sensor
			while (analog10(rport) <= threshold){ // continue until dark
			create_drive_direct(100,-10); // arc right
			if (a_button()!=0) break; } // or button pressed 
			// to be replaced with a sensor
			create_stop();
			//all stop because button was pushed. 
		}
	create_disconnect();
	return 0;
}
