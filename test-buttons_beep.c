// Created on Sat February 16 2013

int main()
{
	
	printf("Hello, World!\n");
	set_a_button_text("Some button a");
	set_b_button_text("That other button");
	set_c_button_text("Useless button");
	create_connect();
	printf("The buttons have been renamed.\n Deal with it.\n Press button 'some button' &\n 'That other button' for beeps.\n 'Useless button' stops the beeps.\n");
	while (side_button() ==0){
		if (a_button() == 1){// can hold for continuous beeps
			printf("beep\n");
			beep();
			msleep(500);
		}
		else if (b_button_clicked() == 1){// must release button
			printf("beep-beep\n");
			beep();
			msleep(300);
			beep();
		}
		else {
			printf("No button pressed.\n");
		}
	}
		printf("I quit");
	create_disconnect();
	return 0;
}
