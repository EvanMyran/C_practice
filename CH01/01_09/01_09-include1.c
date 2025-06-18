#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int a;

	//randomize our seed for the random fnc
	srand( (unsigned)time(NULL) );

	//for loop to print 10 numbers between 1 and 100
	for(a = 0; a < 10; a++)
		printf("%3d ",rand() % 100 + 1);
	putchar('\n');

	return 0;
}
