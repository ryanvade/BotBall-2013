// Created on Wenesday April 10 2013
/* This program will move Robot A accordig to its assignment. */
int initialize(); // tell the compiler about the initialize function
int move(); // tell the compiler about the move function
int grabBotGuy(); // tell the compiler about the grabBotGuy function
int returnBotGuy();// tell the compiler about th returnBotGuy function

int main() {
	create_conect();  
	print(" Initializing.\n");
	int initalize();
	printf("Starting to move to location.\n");
	int move();
	printf("Grabing Bot Guy\n");
	int grabBotGuy
	printf("Returning Bot Guy\n");
	create_disconnect();
	return 0;
}

	int grabBotGuy() 
	{
	int triad = 0; // initialize triad to be 0
	motor(1,-100); // move motor 1 at -100%
	motor(3,-100); // move motor 3 at -100%
	msleep(500); // stop moving the motors after .5 seconds
	ao(); // stop th motors
	while(triad == 0) {
		if (analog10(2) < 950) {
			
			printf("Give me a hug! ;)");
			motor(1,100); //Move motor 0 at full power to grip BotGuy.
			motor(3,100); //Move motor 1 at full power to grip BotGuy.
		}
		else {
			printf("Where is Bot Guy?");
			msleep(200);
		}
	return 0;
	}
	
	int move ()
	{ 
				while(analog10(3) > 500) {}// while the light is not on do nothing. When the light is on start.
					create_drive_direct(-200, -200); //Move create backwards.
						
			return 0;
	}
