// Created on Sat February 16 2013
/* I made this file during the workshop DUH!
see
I 
Told 
you
*/
int main()
{
	
	printf("Hello, World!\n");
	printf("No User. Not Hello\n");
	printf("I am Ryan\n");
	printf("I don't really care what your name is because\n I am a robot.\n");
	
	while (analog10(3)>500) {}
	
	while (digital(9)==0 && digital(8)==0)
		{
		motor(0,600);
		motor(2,750);
		msleep(40);
		motor(0,800);
		}
		
	ao();
	return 0;	
}
