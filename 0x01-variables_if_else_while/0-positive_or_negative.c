#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/* function is main */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d \n", n);
	/* your code goes there */
	if (n > 0)
	  {
	    printf("is positive \n");
	  }
	else if (n < 0){
	  printf("is negative \n");
	}
	else
	  {
	    printf("is zero");
	  }
	return (0);
}

