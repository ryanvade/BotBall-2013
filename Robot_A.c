// Created on Wenesday April 10 2013
/* This program will move Robot A accordig to its assignment. */
int initialize(); // tell the compiler about the initialize function
int move(); // tell the compiler about the move function
int grabBotGuy(); // tell the compiler about the grabBotGuy function
int returnBotGuy();// tell the compiler about th returnBotGuy function
int dropoffBotGuy(); // tell the compiler about the sonar function

int main() {
wait_for_light(3); // 3 is the port number. This function starts the robot after the light is turned on.
printf("The game has started. Lets give BotGuy a hug.\n"); // must I say anything?

printf("Shutdown will be in 2 minutes\n"); // print what is happening
shut_down_in(120); // shutdown the robot in 2 Minutes

create_connect(); //connect to the create

printf(" Initializing.\n"); // print what is happening
initialize();  // run the initialize function

printf("Starting to move to location.\n"); // print what is happening
move(); // run the move function

printf("Grabing Bot Guy\n"); // print what is happening
set_create_distance(0); // reset create distance
 grabBotGuy (); // run the grabBotGuy function

printf("Returning Bot Guy\n"); // print what is happening
 returnBotGuy(); // run the returnBotGuy function

printf("Get Lost Bot Guy\n");// print what is happening
 dropoffBotGuy(); // run the dropoffBotGuy function

create_stop(); // make sure all motors are stoped. 
create_disconnect(); // disconnect from the create
printf("All Done!"); 
return 0;
}

int initialize()// move the grabber motors to the start position.
{
motor(1,-100); // move motor 1 at -100%
motor(3,-100); // move motor 3 at -100%
msleep(500); // stop moving the motors after .5 seconds
set_create_distance(0); // initializes the distance accumulation to start at 0
set_create_total_angle (0); // initializes the angle accumulation to start at 0
ao(); // stop all motors
return 0;	//the function returns 0 if sucessful
}

int move ()
{
	create_drive_direct(-100,-100); // move backwards at 100%
	msleep(6000);//drive for 2 seconds
	create_stop();//stop the motors
	create_drive_direct(-100,100);// pivot to face up
	msleep(2000); //drive for 2 seconds
	create_stop();//stop the motors 
	create_drive_direct(-100,-100); // both motors go backwards 100%
	msleep(7500); // drive for 7.5 seconds
	create_stop();
return 0; // return TRUE if the function completed sucessfully ;)
}

int grabBotGuy()
{
create_stop(); // stop all the motors
motor(1,100); //Move motor 0 at full power to grip BotGuy.
motor(3,100); //Move motor 1 at full power to grip BotGuy.
return 0; // return a TRUE if the function completes succesfully. ;)
}

int returnBotGuy()
{
	printf("I must return to base");
	create_drive_direct(-100,-100);// move backwards at 100 %
	msleep(7500); // keep going backwards for 7.5 seconds
	create_stop(); // stop all motors
	create_drive_direct(100,-100);// pivot to face left 
	msleep(2000); //drive for 2 seconds
	create_stop(); // stop all movement
	create_drive_direct(-100,-100); // move backwards at 100%
	msleep(7000);//drive for 7 seconds
	create_stop(); // stop all movement
	create_drive_direct(-100,-50); // pivot right a little
	msleep(2000); //keep pivoting for 2 seconds
	create_stop(); // stop all motors
	create_drive_direct(-100,-100); // drive backwards at 100%
	msleep(6000); // keep moving for 6 seconds
	create_stop(); // stop all motors
	create_drive_direct(-50,-100); // pivot left a little
	msleep(2000); // keep pivoting for 2 seconds
	create_stop(); // stop all motors
	create_drive_direct(-100,-100); // drive backwards at 100%
	msleep(2000); // keep moving for  seconds
	create_stop(); // stop all motors
return 0;	
}

int dropoffBotGuy()
{	
ao();
create_drive_direct(-100,-100);
msleep(2000); // keep moving backwards for 2 seconds
create_stop(); // stop all motors
create_drive_direct(-100,100); // pivot left
msleep(2000); // keep movig for 2 seconds
create_drive_direct(-100,-100); // move backwards at 100%
msleep(1000); // keep moving for 1 second
create_drive_direct(100,-100); // pivot right
msleep(2000); // keep movig for 2 seconds

int initialize(); // to reset the create grabber
return 0; // return TRUE if the function completed sucessfully ;)
}
