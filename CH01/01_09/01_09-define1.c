#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define a constant named COUNT with value 10. This means we will generate 10 random numbers
#define COUNT 10

int main()
{
	int a;

	#SEED the random number generator using the current time
   	#Get the current time using time(NULL), returns the time in seconds since the epoch
   	#Convert it to unsigned int
   	#Use srand() to set the seed for random numbers
   	#This makes sure we get different random numbers each time we run the program
	srand( (unsigned)time(NULL) );

	#for loop less than 10
	for(a = 0; a < COUNT; a++)
		#rand() % 100 gives a number from 0 to 99. Adding 1 shifts it to 1 to 100
		#Print the number, right-aligned in 3 spaces using printf("%3d ")
		printf("%3d ",rand() % 100 + 1);
	#Print a newline character using putchar('\n') so output ends cleanly
	putchar('\n');

	return 0;
}
