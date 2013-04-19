// Created on Thu April 18 2013
int init();

int main()
{
	printf("Hello, World!\n");
	init();
	return 0;
}

int init()// move the grabber motors to the start position.
{
motor(1,-100); // move motor 1 at -100%
motor(3,-100); // move motor 3 at -100%
msleep(500); // stop moving the motors after .5 seconds
set_create_distance(0); // initializes the distance accumulation to start at 0
set_create_total_angle (0); // initializes the angle accumulation to start at 0
ao(); // stop all motors
return 0;
}
