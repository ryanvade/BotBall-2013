// Created on Sat February 16 2013
/***********************************************************
******************wait for light****************************
***********************************************************/
int main()
{	
	printf("Hello, World!\n");
	printf("No Ryan. Not Hello\n");
	while (create_connect());
	wait_for_light(3); // light sensor is analog port 0
	printf("I must follow the light\n");
	shut_down_in(5.0);
	while(side_button()==0)
	{
		create_drive_direct(100,100);
		
	}
	printf("I quit");
	return 0;
}
