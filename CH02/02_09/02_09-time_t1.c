#include <stdio.h>
#include <time.h>

int main()
{
	//time_t defines the now variable so time_t must defined in a header file
	//getsd time since unix epoch
	time_t now;

	time(&now);
	printf("%s",ctime(&now));

	return(0);
}
