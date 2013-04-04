// Created on Sat February 16 2013

int main()
{
	printf("Hello, World!\n");
	create_connect();
	while (get_create_lbump() ==0 && get_create_rbump() ==0)
	{
		create_drive_direct(400,400);
	}
	create_stop();
	create_disconnect();
	return 0;
}
