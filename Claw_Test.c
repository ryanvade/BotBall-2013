// Created on Sat April 13 2013

int main() {
	int A = 0;
	printf("Helllo World!\n");
	motor(1,-100);
	motor(3,-100);
	msleep(500);
	motor(1,0);
	motor(3,0);
	while(A == 0) {
		if (analog10(2) < 950) {
			
			printf("I hate this so much");
			motor(1,100); //Move motor 0 at full power to grip BotGuy.
			motor(3,100); //Move motor 1 at full power to grip BotGuy.
		}
		else {
			printf("I want C++");
			msleep(200);
		}
	}
	return 0;
}
