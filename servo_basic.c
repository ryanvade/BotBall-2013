/********  move the servo from 700 to  2048             
*****************************************************************/
int main() {
   // preset servo 1 position
   set_servo_position(1,700); 
	printf("Press B to stop");
   enable_servos(); // turn on servos
   msleep(2000); // pause while it moves and user reads screen for 2 seconds
   while((b_button()==0)) // while the button is not pressed
   {  // move servo 1 in steps of 1348
      set_servo_position(1,get_servo_position(1)+ 1348);
      printf("servo at %d\n", get_servo_position(1));
      msleep(200); // pause before next move
      while((!a_button()) && (!b_button())) {}
   }
   disable_servos();
   printf("Robot is done\n");
   return 0;
}


