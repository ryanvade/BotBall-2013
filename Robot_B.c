// Created on Sat April 13 2013
// This is a transport move test. 
int main()
{
	printf("Hello, World!\n");
	motor(0,-100);
	motor(2,-100);
	
	msleep(2000);
	
	ao();
	return 0;

}
