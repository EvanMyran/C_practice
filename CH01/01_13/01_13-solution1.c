#include <stdio.h>
#include <stdlib.h>

/* main program */
int main()
{
	/* initialization */

	/* initial message */

	/* main program loop */

	/* output results */
	puts("The first C practice challenge!\n");
    puts("Im gonna make a bunch of honey-combs! Save the bees.\n");
    for(int rows = 0; rows < 5; rows++) {
	int a = 0, b = 0, c = 0; // Reset counters for each row
	for(int a = 0; a < 10; a++) {
	    printf(" __ ");
	}
	putchar('\n');
	
	for(int b = 0; b < 10; b++) {
	    printf("/ \\ " );
	}
	putchar('\n');
	
	for(int c = 0; c < 10; c++) {
	    printf("\\ / ");
	}
	putchar('\n');
	
	for(int d = 0; d < 10; d++) {
	    printf(" -- ");
	}
	putchar('\n');
    }

	return 0;
}
