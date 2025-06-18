/* input and loop demo */
#include <stdio.h>

int main()
{
	int a,b;

	//printf function
	printf("Type a positive value: ");

	//scanf fucntion scans for user input. scanf("%d", &n) reads an integer from the keyboard and stores it in the integer variable n. 
	//The %d format specifier indicates that an integer is expected, and &n provides the memory address of n so that scanf can store the input value there.
	scanf("%d",&b);

	for(a = 0; a < b; a++)
	{
		printf("I must do this %d times\n",b);
		if(a==9)
			break;
	}
	
	return 0;
}
