#include <stdio.h>

//extern keyword is used to define variables that will be used later
//lets the compiler know that the variables will be defined elsewehre but not to allocate memory to them yet.

//gobally defined variables
int a,b;

void sum(void)
{

	//this tells the compiler in this scenario that we dont want a and b redefined 
	//but instead we want to use the globally defined ones
	//you do this when you dont want a function to take in inputs but instead use 
	//previosuly defined variables
	extern int a,b;

	a = 91; b = 7;
	printf("%d + %d = %d\n",a,b,a+b);
}

int main()
{
	//same as above
	extern int a,b;

	puts("Calling the sum() function:");
	sum();
	puts("And in main():");
	printf("%d + %d = %d\n",a,b,a+b);

	return(0);
}
