#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int hello, counter;
    printf("Please enter a number: ");
    scanf("%d\n", & hello);
        while(hello > 5)
        {
            hello--;
            printf("%d", &hello);
            break;
        }
        {
            printf("Good Bye");

        }
    return 0;
}
