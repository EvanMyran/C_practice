#include <stdio.h>

int main()
{
/*
	char happy_face = 191;	 //isn't this the correct code? 

	puts("I can generate text all day long.");
	printf("%c\n",happy_face); 

	return(0);
*/
	//the reason this code fails is because wea are assigning the happy_face variable to a integer
	//then when we go to print we use %c char assignment and c can cant read it because its an int
	//even if you change to %d youll -65 printed because thats the int that will be read from the corrupted char assignment.
	//teh complete fix is to change char to int and use %d
	int happy_face = 191;	 //isn't this the correct code? 

	puts("I can generate text all day long.");
	printf("%d\n",happy_face); 

	return(0);
*/
}

