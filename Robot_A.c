// Created on Wenesday April 10 2013
/* This program will move Robot A accordig to its assignment. */

int line_Follow( int threshold, int rport, int high, int low);

int main()
{
	printf("Hello, World!\n");
	create_connect(); // start the connection to the create
	printf("Connected to the Create\n"); // tell the world what is going on. 
	set_create_distance(0); //set distance accumulator at 0
	set_create_total_angle(0); //set angle acuumulator at 0
	int rport=1; // identify ports used, might need to change
	printf("Light sensor is supposed to be port %d. ", &rport);
	int threshold=500; // light threshold in the room.  Black is around 0, plus standard light brings the light at ~512
	//int high=100, low=0; //motor power for arc. Will need to change to perfect drive.  * Probably not needed for Create.
			
	int line_Follow(int threshold, int rport, int high, int low);
			
	create_disconnect(); // disconnect from the create
	return 0;
}
int line_Follow(int threshold,int rport, int high, int low)
	{
			printf("\n The threshold is currently at %d", &threshold);
	while (b_button()==0) {} // start after pushing B 
	/* To be replaced with wait_for_light(port#); so that light starts the robot. Right now it is started with B*/
	while (a_button()==0){ // stop after pushing A
		/* to be relplaced with a button sensor. Such as digital(Port #); so that the claw grabs the transport when the sensor(s) are pushed.*/
			while (analog10(rport) > threshold) { // continue until not dark
			create_drive_direct(0,300); // arc left
			printf("The current light strength is %d", analog10(rport));
			if (a_button()!=0) break; } // or button pressed
			// to be replaced with a sensor
			while (analog10(rport) <= threshold){ // continue until dark
			create_drive_direct(300,0); // arc right
			printf("The current light strength is %d", analog10(rport));
			if (a_button()!=0) break; } // or button pressed 
			// to be replaced with a sensor
			create_stop(); // stop all create motors. * not used in the create example. 
										}
	return 0;
	}
