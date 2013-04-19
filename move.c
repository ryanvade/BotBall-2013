// Created on Thu April 18 2013

int main()
{
	create_connect();
	printf("Hello, World!\n");
	set_create_distance(0);

		
while (get_create_distance() < -30) // while the create has not moved the full 12 inches
	
	{
		printf("Not there yet.\n"); // print that the robot is not there yet
		create_drive_direct(-100,-100); // move backwards at 100%
	}

printf("I have reached a turning point.\n"); // print this while the create has not moved the first foot
create_stop(); // stop all motors
set_create_distance(0); // reset create distance
	create_disconnect();
	return 0;
}
