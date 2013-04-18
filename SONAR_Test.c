/*This program demonstrates how to use the SONAR for sensing distances. You need to plug the SONAR sensor into port 0. This program beeps if anything changes from when the program starts, i.e. if someone walks by. Remember - when the SONAR is plugged in, or the CBC is turned on, the SONAR needs about 17 inches of free space in front of it for 350 ms while it calibrates.*/
int main()
{
int i=0; //comparator variable
set_each_analog_state(int 1, int 0, int 0, int 0, int 0, int 0, int 0, int 0); //set port 0 to floating
msleep(0.02); //wait for state to change
i=analog(0); //take initial SONAR reading
while(1){ //loop forever
if(analog(0)>(i+15)){ //if object moves away
beep();
								}
if(analog(0)<(i-15)){ //if object moves closer
beep();
								}
			}
}
