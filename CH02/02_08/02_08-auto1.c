#include <stdio.h>

//fucntion 
void sum(void)
{
	//auto is a keyword for scope
	//when you declare an auto variable, it declares sotrage duration
	//the variable gets stored on the stack when 
	//however when the program leaves the scope that the variable is defined, this case the sum function
	//the variables are destroyed from the stack
	auto int a,b;

	//define variables
	a = 91; b = 7;
	printf("%d + %d = %d\n",a,b,a+b);
}

int main()
{
	puts("Calling the sum() function:");
	sum();
	puts("done");

	return(0);
}
