/*This program moves two servos. Servos need to be plugged into ports 0 and 3. The program presets servo 0 to position 150. Then the program waits for the black button to be pushed. Then it enables servos, servo 0 goes to position 150 and servo 3 goes to 1900. Then servo 3 goes to 1900. Finally servo 0 goes to 1900 and servo 3 goes to 150 and the program ends. See appendix for finding your servo?s range. */
int main(){
set_servo_position(1,150); //preset port 0 to 150
printf("servo 0 at position 0\n");
printf("press black button to continue\n");
while(!black_button()){} //wait for black button
enable_servos(); //enable the servos
sleep(1); //wait for servo to move
set_servo_position(1,1900); //move port 3 to 1900
sleep(1); //wait for servo to move
set_servo_position(1,1900); //move port 0 to 1900
set_servo_position(1,150); //move port 3 to 150
sleep(3); //wait for servos to move
disable_servos(); //power down servos
}
