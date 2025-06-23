#include <stdio.h>

int main()
{
	char ch = 'A';
	unsigned x = 100;
	float pi = 3.14159;

	//%u - represents the unsigned variable
	//conversion specifications come in between the %[options]n
	//example is .2 means 2 numbers after the decimal place
	printf("ch = %c, x = %u, pi = %f\n",ch,x,pi);
	return 0;
}
