// Created on Wenesday April 10 2013
/* This program will move Robot A accordig to its assignment. */
int initalize(); // tell the compiler about the initialize function
int move(); // tell the compiler about the move function
int grabBotGuy(); // tell the compiler about the grabBotGuy function
int returnBotGuy();// tell the compiler about th returnBotGuy function
int dropoffBotGuy(); // tell the compiler about the sonar function

int main() {
	wait_for_light(3); // 3 is the port number. This function starts the robot after the light is turned on. 
	printf("The game has started.  Lets give BotGuy a hug.\n"); // must I say anything?
	
	printf("Shutdown will be in 2 minutes\n"); // print what is happening
	shut_down_in(120); // shut down the robot after 2 minutes. Is 2 minutes correct?
	
	create_connect();  //connect to the create
		
	printf(" Initializing.\n"); // print what is happening
	int initalize(); // run the initialize function
	
	printf("Starting to move to location.\n"); // print what is happening
	int move(); // run the move function
	
	printf("Grabing Bot Guy\n"); // print what is happening
	set_create_distance(0); // reset create distance
	int grabBotGuy (); // run the grabBotGuy function
	
	printf("Returning Bot Guy\n"); // print what is happening
	int returnBotGuy(); // run the returnBotGuy function
	
	create_disconnect(); // disconnect from the create
	
	return 0;
}

	int initalize()
							{
	// move the grabber motors to the start position.
	motor(1,-100); // move motor 1 at -100%
	motor(3,-100); // move motor 3 at -100%
	msleep(500); // stop moving the motors after .5 seconds			
	set_create_distance(0); // initializes the distance accumulation to start at 0
	set_create_total_angle (0); // initializes the angle accumulation to start at 0							
	ao(); // stop all motors
	return 0;	 //the function returns 0 if sucessful						
							}
							

	int grabBotGuy() 
	{
	while(get_create_distance() < 254) // while the create has not moved 10 inches
	{
		create_drive_direct(-30,-30); // move the create backwards at 30%
		if (digital (2) == 1) //. Replace with (analog10(2) < 950) if we switch back to the pull switch. 
		{
			printf("Give me a hug! ;)\n"); // originally just to see if main went into this function, now it is just for fun
			motor(1,100); //Move motor 0 at full power to grip BotGuy.
			motor(3,100); //Move motor 1 at full power to grip BotGuy.
		}
		else //do this instead
				{
			printf("Where is Bot Guy?\n"); // originally just to see if main went into this function, now it is just for fun
			msleep(200); // wait for .2 seconds
				}
	  }
	 set_create_distance(0); // reset the create distance
	return 0; // return a TRUE if the function completes succesfully. ;)
}
	
	int move ()
	{ 				
		while (get_create_distance() <= 558.8) // while the create has not moved the full 12 inches
		{		
				{
				printf("Not there yet.\n"); // print that the robot is not there yet
				create_drive_direct(-100,-100); // move backwards at 100%
				}
						{
						printf("I have reached a turning point.\n"); // print this while the create has not moved the first foot
						create_stop(); // stop all motors
						set_create_distance(0); // reset create distance
						}	
		}
		while (get_create_total_angle() <= 90) // while the create has not turned 90 degrees. Does this matter what direction?
		{
			create_drive_direct(-75,0); // move the left motor at backwards at 75%. Don't move the right motor. Cause a pivot.
		}
		{
			printf("Done turning. :)\n"); // print when done turning. 
			create_stop(); //stop the motors. 
			set_create_total_angle(0); // reset create total angle
		}
		while (get_create_distance() <=  609.6 ) // while the create has not moved 24 inches
		{
			printf("I am moving again\n"); // print what is happening. 
			create_drive_direct(-100,-100);// move the create backwards at 100%
		}
		{
			printf("I am near my destination.\n"); // print this while the create has not moved the first foot
			create_stop(); // stop all motors
			set_create_distance(0); // reset create distance
		}
		return 0; // return TRUE if the function completed sucessfully ;)
		}
int dropoffBotGuy()
		{
			/*int i = 0; //create a counting varialble.  Initiate it to be 0
			set_each_analog_state(1,0,0,0,0,0,0,0); //make port 0 a floating port. (floting point return)
			msleep(200); //wait for .2 seconds for the SONAR to adjust. Time may need to be changed.
			i=analog(0); //Make i equal to the output of the SONAR
			while() 
			{
				printf("Creeping forward.\n");
				create_drive_direct(-30,-30); // move the create backwards at 30%
			}
			{
				printf("Arrived. Removing Bot Guy\n");
				create_Stop(); // stop all motors
			} */
			create_drive_direct(-30,-30);
			msleep(2000); // drive for 2 seconds
			create_stop(); // stop all motors
			int initialize(); // to reset the create grabber
			return 0; // return TRUE if the function completed sucessfully ;)
int returnBotGuy()
		{
			set_create_total_angle(0); // reset create total angle
			while(digital (2) == 1) // while BotGuy is sqeezed. 
			{
				printf("HA HA!");
				while(get_create_total_angle() <= 180) // while the create has not turned 180 degrees. Does this matter what direction?
				{
				create_drive_direct(-75,0); // move the left motor at backwards at 75%. Don't move the right motor. Cause a pivot.
				}
				{
			printf("Done turning. Again ;)\n"); // print when done turning. 
			create_stop(); //stop the motors. 
			set_create_total_angle(0); // reset create total angle
				}
						set_create_distance(0); // reset create distance
						while (get_create_distance() <= 609.6)
							{
								printf("I am moving again\n"); // print what is happening. 
								create_drive_direct(-100,-100);// move the create backwards at 100%
							}
								{
									printf("I am near my destination.\n"); // print this while the create has not moved the first foot
									create_stop(); // stop all motors
									set_create_distance(0); // reset create distance
								}
										set_create_total_angle(0); // reset total create total angle
										while (get_create_total_angle() <= 90) // while the create has not turned 90 degrees. Does this matter what direction?
										{
										create_drive_direct(0,-75); // move the right motor at backwards at 75%. Don't move the left motor. Cause a pivot.
										}
											{
											printf("Done turning.Yet again. :)\n"); // print when done turning. 
											create_stop(); //stop the motors. 
											set_create_total_angle(0); // reset create total angle
											}
												set_create_distance(0); // reset create distance
												while (get_create_distance() <= 609.6)
													{
													printf("I am moving again\n"); // print what is happening. 
													create_drive_direct(-100,-100);// move the create backwards at 100%
													}
														{
														printf("I am near my next destination.\n"); // print this while the create has not moved the first foot
														create_stop(); // stop all motors
														set_create_distance(0); // reset create distance
														}
															set_create_total_angle(0); // reset create total angle
															while ( get_create_total_angle() <= 45) // while the create has not turned 90 degrees. Does this matter what direction? 
																 {
																create_drive_direct(0,-75); // move the right motor at backwards at 75%. Don't move the left motor. Cause a pivot.
																}
																	{
																		printf("Done turning.Yet again. :)\n"); // print when done turning. 
																		create_stop(); //stop the motors. 
																		set_create_total_angle(0); // reset create total angle
																	}
		set_create_distance(0);
		while (get_create_distance() <= 304.8)
					{
					printf("I am moving again\n"); // print what is happening. 
					create_drive_direct(-100,-100);// move the create backwards at 100%
					}
						{
						printf("I am finaly near my next destination.\n"); // print this while the create has not moved the first foot
						create_stop(); // stop all motors
						set_create_distance(0); // reset create distance
						}
							set_create_total_angle(0); // reset create total angle
							while ( get_create_total_angle() <= 45) // while the create has not turned 90 degrees. Does this matter what direction? 
							{
							create_drive_direct(0,-75); // move the right motor at backwards at 75%. Don't move the left motor. Cause a pivot.
							}
								{
								printf("Done turning.Yet again. :)\n"); // print when done turning. 
								create_stop(); //stop the motors. 
								set_create_total_angle(0); // reset create total angle
								}
		int dropoffBotGuy();
		return 0;							
		}
	}
}
