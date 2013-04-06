// Created on Sat April 6 2013
/* This program will move Robot B accordig to its assignment.  First it will follow the black line to the Launchpad, grab the Launchpad, then drag it to the launch area */
int main()
{
	printf("Hello, World!\n");
	int rport=1, leftmtr=14, rightmtr=15; // identify ports used, might need to change
	int threshold=512; // light threshold in the room
	int high=10, int low=-1; //motor power for arc
	while (b_button()==0) {} // start after pushing B
	while (a_button()==0){ // stop after pushing A
		while (analog10(rport) > threshold) { //continue until dark
			motor(leftmtr,low); motor(rightmtr, high);
				
	return 0;
}
