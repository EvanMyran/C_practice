#include <stdio.h>
/* The math header file contains definitions for M_PI
   and the sin() function. It does not contain the
   code for the sin() function. The code lies in the
   math library file */
#include <math.h>

int main()
{
	int w;

	//for loop int w iterate up until 10
	for( w=0; w<10; w++)
	{
		//printing out float with 2 numbers post decimals
		//the number is the sin of pi over w + 1
		printf("%.2f\n",sin(M_PI/(w+1)) );
	}

	//return 0
	return 0;
}
